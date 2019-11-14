import random

strText = "Python is a very easy programming language"

nPos1 = random.randrange(0, len(strText))
nPos2 = random.randrange(0, len(strText))
print("Random number:", nPos1)
print("Random number:", nPos2)
strSliced = strText[nPos1:nPos2]
print(strSliced)


