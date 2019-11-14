for i in range(0, 5): #range(start, stop) from start until stop - 1
    print(i)
for i in range(10,21):
    print(i, end = " ")

nSum = 0

for i in range(1, 11):
    nSum += i

print("The sum is", nSum)


#to manually modify a step, use 3rd parameter range(start, stop, step) - step can be negative

for i in range(0, 20, 2):
    print(i, end = " ")

#countdown from 10 to 1

print("\n")

for i in range(10, 0, -1):
    print(i, end = " ")

print("\n")

arrNumbers = [10, 20, 30, 40, 50]
print(arrNumbers[0])
print(arrNumbers[3])

print("\n")


arrNumbers = [10, 20, 30, 40, 50]
nLen = len(arrNumbers)

for i in range(0,nLen):
    print(arrNumbers[i]) #nLen is never reached so the above code is safe (nLen - 1 for end point)

arrNumbers[0] = 5
arrNumbers[3] = -8
print(arrNumbers[0])
print(arrNumbers[3])


# arrNumbers = [0, 0, 0, 0, 0]
# nLen = len(arrNumbers)
#
# for i in range(0, nLen):
#     strInputText = "Input element " + str(i + 1) + ": "
#     arrNumbers[i] = input(strInputText)
#
# for i in range(0, nLen):
#     print(arrNumbers[i], end =" ")



strText = "For loop"
nLen = len(strText)
nCount = 0

for i in range(0, nLen):
    if (strText[i] == 'o'):
        nCount += 1

print(nCount)

arrNumbers = [10, 20, 30, 40, 50]

for nNum in arrNumbers:
    print(nNum)

strText = "For loop"
nCount = 0

for c in strText:
    if(c == 'o'):
        nCount += 1
print("o occured", nCount, "times in the string")


