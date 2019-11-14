arrNumbers = [5, 7, 2, 83, 12, 25]
nNum = int(input("Add a numbers"))
nLen = len(arrNumbers)
nCount = 0
i = 0
for i in range (0, nLen):
    if(nNum == arrNumbers[i]):
        print(i)
        nCount = nCount + 1

if nCount == 0:
    print("does not exist")

#OR

arrNumbers = [5, 7, 2, 83, 12, 25]
nNum = int(input("Add a numbers: "))
nLen = len(arrNumbers)
bFound = False

for i in range (0, nLen):
    if(nNum == arrNumbers[i]):
        print("position", i)
        bFound = True

if(bFound == False):
        print("does not exist")

# OR
if nNum in arrNumbers:
    print("Found")
else:
    print("not found")

# OR
if nNum not in arrNumbers:
    print("not Found")
else:
    print("found")


#Exercise 03

arrNumbers = [5, 7, 2, 83, 12, 25]
nMax = arrNumbers[0]
nMin = arrNumbers[0]
nSum = 0

for i in range (0, nLen):
    if(arrNumbers[i] > nMax):
        nMax = arrNumbers[i]
    if(arrNumbers[i] < nMin):
        nMin = arrNumbers[i]
    nSum = nSum + arrNumbers[i]

fAvg = nSum/nLen

print(nMax)
print(nMin)
print(fAvg)

strString = input("add string: ")
nLen = len(strString) // 2
nLen2 = len(strString)
bPalindrome = True
i = 0
for i in range (0, nLen):
    if(strString[i] != strString[nLen2 - 1 - i]):
        bPalindrome = False
        print("not a palindrome")
        break

if(bPalindrome == True):
    print("palindrome")


