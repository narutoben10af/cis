#boolean value True or False is capital in python, small letter in java
#put b for boolean variable
#boolean veariable can start with is, can
bPositive = False
#and -> true if both the operands are true, or -> true if either, not
#X is false, NOT X is true
#X is true, NOT X is false
#!= not equal to
# x! = y # x not equal to y
# x == y # x equals y


x = 5
y = 2
print(x > y)

x = -10
if (x > 0):
    print("x is positive") #indentation is IMPORTANT, if no indentation, not included in if/else statements
    print("x is definitely positive")
else:
    print("x is negative")

x=5
if (x != 0):
    print("x is not zero")
else:
    print("x is zero")
#
# nGrade1022 = int(input("What is your Math Grade"))
# nGrade1051 = int(input("What is your Python Grade"))
#
# if ((nGrade1022 >= 70) and (nGrade1051 >= 70)):
#     print("You can register for Java")
# else:
#     print("Try again next year")
#
# #string comparison
#
# strPassword = input("Input password ")
#
# if (strPassword == "python"):
#     print("Access granted")
# else:
#     print("Access denied")
#
# nNum1 = int(input("Input Number 1: "))
# nNum2 = int(input("Input number 2: "))
# bAreEqual = (nNum1 == nNum2)
#
# if(bAreEqual == True): #or directly if(bAreEqual): same equivalent
#     print("The numbers are equal")
# else:
#     print("The numbers are different")



#elif is else if, can create as many else if blocks as necessary
#last block always else

x = 10
y = 5
if (x + y) > 10:
    print("x + y is bigger than 10")
elif ((x + y) == 10):
    print("x + y is equal to 10")
else:
    print("x + y is less than 10")

#OR NESTED IFs
x = 5
if(x) >= 0:
    if ((x) == 0):
        print("x is zero")
    else:
        print("x is positive")
else:
    print("x is negative")



