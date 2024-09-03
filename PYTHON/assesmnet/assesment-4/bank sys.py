import mysql.connector

class Database:
    def __init__(self, host, user, password, database):
        self.host = host
        self.user = user
        self.password = password
        self.database = database
        self.cnx = None

    def connect(self):
        self.cnx = mysql.connector.connect(
            host=self.host,
            user=self.user,
            password=self.password,
            database=self.database
        )
        return self.cnx

    def close(self):
        if self.cnx:
            self.cnx.close()

    def execute_query(self, query, params=None):
        cursor = self.cnx.cursor()
        if params:
            cursor.execute(query, params)
        else:
            cursor.execute(query)
        result = cursor.fetchall()
        cursor.close()
        return result

    def execute_update(self, query, params=None):
        cursor = self.cnx.cursor()
        if params:
            cursor.execute(query, params)
        else:
            cursor.execute(query)
        self.cnx.commit()
        cursor.close()

class Banker:
    def __init__(self, database):
        self.database = database

    def register(self, name, email, password):
        query = "INSERT INTO bankers (name, email, password) VALUES (%s, %s, %s)"
        self.database.execute_update(query, (name, email, password))

    def login(self, email, password):
        query = "SELECT * FROM bankers WHERE email = %s AND password = %s"
        result = self.database.execute_query(query, (email, password))
        if result:
            return True
        return False

    def update_customers(self):
        query = "UPDATE customers SET balance = balance + 100"
        self.database.execute_update(query)

    def view_customers(self):
        query = "SELECT * FROM customers"
        result = self.database.execute_query(query)
        return result

    def delete_customers(self):
        query = "DELETE FROM customers"
        self.database.execute_update(query)

class Customer:
    def __init__(self, database):
        self.database = database
        self.balance = 0
        self.email = None

    def register(self, name, email, password):
        query = "INSERT INTO customers (name, email, password) VALUES (%s, %s, %s)"
        self.database.execute_update(query, (name, email, password))
        self.email = email

    def login(self, email, password):
        query = "SELECT * FROM customers WHERE email = %s AND password = %s"
        result = self.database.execute_query(query, (email, password))
        if result:
            self.email = email
            return True
        return False

    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient balance")
            return
        self.balance -= amount
        query = "UPDATE customers SET balance = %s WHERE email = %s"
        self.database.execute_update(query, (self.balance, self.email))

    def deposit(self, amount):
        self.balance += amount
        query = "UPDATE customers SET balance = %s WHERE email = %s"
        self.database.execute_update(query, (self.balance, self.email))

    def view_balance(self):
        return self.balance

def main():
    database = Database('localhost', 'root', 'password', 'banking_app')
    database.connect()

    while True:
        print("1. Banker")
        print("2. Customer")
        print("3. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            banker = Banker(database)
            while True:
                print("1. Register")
                print("2. Login")
                print("3. Update Customers")
                print("4. View Customers")
                print("5. Delete Customers")
                print("6. Back")
                choice = input("Enter your choice: ")

                if choice == "1":
                    name = input("Enter name: ")
                    email = input("Enter email: ")
                    password = input("Enter password: ")
                    banker.register(name, email, password)
                    print("Registration successful")
                elif choice == "2":
                    email = input("Enter email: ")
                    password = input("Enter password: ")
                    if banker.login(email, password):
                        print("Login successful")
                    else:
                        print("Invalid credentials")
                elif choice == "3":
                    banker.update_customers()
                    print("Customers updated successfully")
                elif choice == "4":
                    customers = banker.view_customers()
                    for customer in customers:
                        print(customer)
                elif choice == "5":
                    banker.delete_customers()
                    print("Customers deleted successfully")
                elif choice == "6":
                    break

        elif choice == "2":
            customer = Customer(database)
            while True:
                print("1. Register")
                print("2. Login")
                print("3. Withdraw")
                print("4. Deposit")
                print("5. View Balance")
                print("6. Back")
                choice = input("Enter your choice: ")