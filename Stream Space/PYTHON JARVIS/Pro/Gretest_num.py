from functools import reduce
l = [111,22,25,14,185,458,658,753,941,5,74,21]

def greater(a, b):
    if (a>b):
        return a
    return b

print(reduce(greater, l))