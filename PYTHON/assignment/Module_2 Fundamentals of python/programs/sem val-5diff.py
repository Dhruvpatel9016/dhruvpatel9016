a = int(input("Enter A = "))

b = int(input("Enter B = "))

#defining a function

def result(a, b):

   if(a == b or abs(a-b) == 5 or abs(a+b) == 5):

       return True

   else:

       return False

#printing the result

print(result(a, b))