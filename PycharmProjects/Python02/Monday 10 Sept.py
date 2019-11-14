import random


strSentence = "Hello Python"
strUpper = strSentence.upper()
print(strUpper)
strLower = strSentence.lower()
print(strLower)
strSentence2 = "this is a random sentence"

#find "is"
nRes = strSentence2.find("is")
print("substring 'is':", nRes)

#find "hello"
nRes = strSentence2.find("hello")
print("substring 'hello':", nRes)

#find "ten"
nRes = strSentence2.find("ten",)
print("substring 'ten':", nRes)

strSentence = "MIT is the best university in the world"
strResult = strSentence.replace("MIT", "Harvard")
print(strResult)

strSentence = "Najib is the 1MDB mastermind"
strResult = strSentence.replace("Najib", "Rosmah")
print(strResult)

#
# strValue = "hello, are you doing fine? Can you help cook?"
# print(strValue[21])
# print(strValue[13])
# print(strValue[27])
# print(strValue[43])
#
#strings are immutable, they cannot be changed


strOriginalString = "Hello, how are you?"
strSubstring = strOriginalString[0:5]

strValue = "pizza"
strSlice = strValue[0:5]
print("The slice is", strSlice)

strSlice = strValue[1:3]
print("The slice is", strSlice)

print("The slice is", strValue[-4:-2])

print("The slice is", strValue[-4:3])

print("The slice is", strValue[-5:5])

strValue = "hello"
nPos = random.randrange(0, 5) #5 is excluded
print("Random number:", nPos)
print("Character at", nPos, ":", strValue[nPos])

