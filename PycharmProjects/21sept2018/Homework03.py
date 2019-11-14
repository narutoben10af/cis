nProduct = 1

for i in range(1, 11):
    nProduct = nProduct * i

print(nProduct)

#Exercise 2

i = 0
arrNumbers = [5, 7, 2, 83, 12, 25]
nLen = len(arrNumbers)
nCount = 0

nCheck = int(input("Guess number in array: "))

for i in range(0, nLen):
    if(arrNumbers[i] == nCheck):
        print("Number found at ", i + 1)
        nCount += 1

if nCount == 0:
    print("Number not found")

#Exercise 07
i = 1
for i in range(1, 26, 2):
    print(i)
