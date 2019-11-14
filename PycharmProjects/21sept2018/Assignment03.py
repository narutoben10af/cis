#Exercise 01
strWord = input("Insert a palindrome word: ")
nLen = len(strWord)
nCount = 0
bDetermine = None

for i in range (0, nLen // 2):
    if(strWord[i] != strWord[nLen - (i + 1)]):
        bDetermine = False
        break
    else:
        bDetermine = True

if(bDetermine == True):
    print("Palindrome") 
else:
    print("Not Palindrome")


#Exercise 02

nNum = int(input("Insert Number: "))
nFib1 = 0
nFib2 = 1
nFin = 0
print(nFib1)
print(nFib2)

for i in range(1, nNum - 1):
    nFin = nFib1 + nFib2
    print(nFin)
    i += 1
    nFib1 = nFib2
    nFib2 = nFin  