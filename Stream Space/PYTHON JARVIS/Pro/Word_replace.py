words = ["Donkey", "Bad"] #write that word you wont to replace in file

with open("file.txt", "r")as f:
    contetnt = f.read() #...read in this file 
    
for word in words:
    contetnt = contetnt.replace(word, "#" * len(word)) 

with open("file.txt", "w")as f:
    f.write(contetnt) #...write in this file 

