# nMax = None
# nNum1 = int(input("number here "))
# nNum2 = int(input("number here "))
# nNum3 = int(input("number here "))
#
# if int(nNum1 > nNum2):
#     if nNum1 > nNum3:
#         nMax = nNum1
#         print(nMax)
# elif nNum2 > nNum1:
#     if nNum2 > nNum3:
#         nMax = nNum2
#         print(nMax)

# while loop will run as long as the test condition is true.
# once the condition become false the loop wil stop
# sentry variable is a variable that controls the condition of the loop.

i = 0

while (i < 10):
    print(i)
    i = i + 1

print("Counting complete")

i = 10

while (i > 0):
    print(i)
    i = i - 1

print("Counting complete")

#Lopp through characters of a string

strText = "Hello"
i = 0
nLen = len(strText)

while (i < nLen):
    print(strText[i])
    i = i + 1

strSentence = "I am writing a while loop in Python"
i = 0
nLen = len(strSentence)

while((strSentence[i] != "j") and (i < nLen - 1)):
    i += 1

if(i == nLen - 1):
    print("'j' is not found in the string")
else:
    print("there are", i + "characters before j")


i = 0

while (i < 10):
    i += 1

    if (i == 5):
        continue #goes back to top, prevents to continue to go down the loop

    print(i)

print("Count complete")

i = 0

while (i < 10):
    i += 1

    if (i == 5):
        break #ends the loop

    print(i)

print("Count complete")


i = 0

while(True):
    i += 1

    if (i == 20):
        break

    print(i)

print("Complete")