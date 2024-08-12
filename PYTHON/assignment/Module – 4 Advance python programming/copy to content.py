with open('text.txt','r') as firstfile, open('text2.txt','a') as secondfile: 
	
	for line in firstfile: 
			
			secondfile.write(line)
