inputString = input("Enter Valueble Name = ")

l = len(inputString)
newString = ""

for i in range(0, len(inputString)):
	if l < 3:
		break
	else:
		if i in (0, 1, l-2, l-1):
			newString = newString + inputString[i]
		else:
			continue
		
print("Input string : " + inputString)
print("New String : " + newString)
