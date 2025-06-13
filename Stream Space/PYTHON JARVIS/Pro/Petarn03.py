n = int(input("Enter your num:- "))

def pet(n):
    if(n==0):
        return
    print("*" * n)
    pet(n-1)
pet(n)