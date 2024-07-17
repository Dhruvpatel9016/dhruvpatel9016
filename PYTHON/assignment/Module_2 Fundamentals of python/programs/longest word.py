def longestLength(words):
	res=max(words,key=len)
	print("The word with the longest length is:", res,
		" and length is ", len(res))

a = ["one", "two", "third", "four"]
longestLength(a)
