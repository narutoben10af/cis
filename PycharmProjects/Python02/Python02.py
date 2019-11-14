'''
#input prompt function
nNum = input("Enter a number ")
#add a space at the end of string
print("Your ID is " + nNum)
strName = input("Enter your name ")
print("Hey", strName, "How are you today?")
strCourse = input("Course Name")
print("Course: ", strCourse)
'''

'''
strNum1 = input("Enter the first number ")
nNum1 = int(strNum1)
strNum2 = input("Enter the second number ")
nNum2 = int(strNum2)
nTotal = (nNum1 + nNum2)
print("the total is", nTotal)
'''

# nNum1 = int(input("Enter the first number "))
# nNum2 = int(input("Enter the second number "))
# nNum3 = int(input("Enter the second number "))
# nNum4 = int(input("Enter the second number "))
# nNum5 = int(input("Enter the second number "))
# nTotal = (nNum1 + nNum2 - nNum3 * nNum4 / nNum5 + (nNum1 % nNum3))
# print("the total is", nTotal)
#
#
# nNum7 = 3
# nNum8 = 5
# print(nNum7 // nNum8) #floor division, goes to the lowest number divided (integer)
# print(nNum7 / nNum8) #normal division (always float)
# print(2 ** 4) #power 2^4


#shortcut
a = 10
print(a)
a = a + 2
print(a)
a = a / 3
print(a)
a = a ** 5
print(a)

a += 2
print(a)

a /= 10
print(a)
a %= 10
print(a)

#always use brackets

nNum10 = 5
print("The number is", nNum10)
nNum11= 7
print("The number is", nNum11)


#swap the variables using temporary/extra variable
temp1 = nNum11
nNum11 = nNum10
nNum10 = temp1
print("The number is", nNum11)
print("The number is", nNum10)


strSentence = "This is a sentence of 5"
nLen = len(strSentence)
print("The length of the string is", nLen)

strSentence = len("\nsentence 2")
print("The length of the string is", strSentence)

nLen2 = len("another string")
print(nLen2)

