import logging

logging.basicConfig(filename='log_file.log', level=logging.INFO)

students = {}
faculty_students = {}

def add_student():
    student_id = input("Enter student ID: ")
    first_name = input("Enter first name: ")
    while not first_name.isalpha():
        print("Invalid first name. Please enter a valid name.")
        first_name = input("Enter first name: ")

    contact_number = input("Enter contact number: ")
    while not contact_number.isdigit():
        print("Invalid contact number. Please enter a valid number.")
        contact_number = input("Enter contact number: ")

    students[student_id] = {"first_name": first_name, "contact_number": contact_number}
    logging.info(f"Student {student_id} added successfully.")

def remove_student():
    student_id = input("Enter student ID to remove: ")
    if student_id in students:
        confirm = input("Are you sure you want to remove this student? (Y/N): ")
        if confirm.upper() == "Y":
            del students[student_id]
            logging.info(f"Student {student_id} removed successfully.")
        else:
            print("Removal cancelled.")
    else:
        print("Student not found.")

def view_all_students():
    for student_id, student_info in students.items():
        print(f"Student ID: {student_id}, First Name: {student_info['first_name']}, Contact Number: {student_info['contact_number']}")

def view_specific_student():
    student_id = input("Enter student ID to view: ")
    if student_id in students:
        student_info = students[student_id]
        print(f"Student ID: {student_id}, First Name: {student_info['first_name']}, Contact Number: {student_info['contact_number']}")
    else:
        print("Student not found.")

def add_marks():
    faculty_id = input("Enter faculty ID: ")
    student_id = input("Enter student ID: ")
    if student_id in faculty_students.get(faculty_id, {}):
        marks = input("Enter marks: ")
        faculty_students[faculty_id][student_id]["marks"] = marks
        logging.info(f"Marks added for student {student_id} by faculty {faculty_id}.")
    else:
        print("Student not found in faculty's list.")

def view_students():
    faculty_id = input("Enter faculty ID: ")
    if faculty_id in faculty_students:
        for student_id, student_info in faculty_students[faculty_id].items():
            print(f"Student ID: {student_id}, Marks: {student_info['marks']}")
    else:
        print("Faculty not found.")

def counsellor_menu():
    while True:
        print("Counsellor Menu")
        print("1. Add Student")
        print("2. Remove Student")
        print("3. View All Students")
        print("4. View Specific Student")
        print("5. Back to Main Menu")
        choice = input("Enter your choice: ")

        if choice == "1":
            add_student()
        elif choice == "2":
            remove_student()
        elif choice == "3":
            view_all_students()
        elif choice == "4":
            view_specific_student()
        elif choice == "5":
            break
        else:
            print("Invalid choice. Please try again.")

def faculty_menu():
    while True:
        print("Faculty Menu")
        print("1. Add Marks")
        print("2. View Students")
        print("3. Back to Main Menu")
        choice = input("Enter your choice: ")

        if choice == "1":
            add_marks()
        elif choice == "2":
            view_students()
        elif choice == "3":
            break
        else:
            print("Invalid choice. Please try again.")

def main():
    while True:
        print("Student Management System")
        print("1. Counsellor Menu")
        print("2. Faculty Menu")
        print("3. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            counsellor_menu()
        elif choice == "2":
            faculty_menu()
        elif choice == "3":
            print("Exiting the system. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()