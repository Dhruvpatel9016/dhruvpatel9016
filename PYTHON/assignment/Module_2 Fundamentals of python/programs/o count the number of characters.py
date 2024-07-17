user = input("Enter Name = ")
 
# using naive method to get count
# of each element in string
name = {}
 
for i in user:
    if i in name:
        name[i] += 1
    else:
        name[i] = 1
 
# printing result
print("Count of all characters is :\n "
      + str(name))