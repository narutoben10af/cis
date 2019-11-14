for i in range (1,6):
    for j in range(1,4):
        print(j, end = " ")

    print() #prints empty line

for i in range(1, 6):
    print("Row", i, "\t", end = "")

    for j in range(10, 40, 10):
        print(j, end = " ")

    print()

for i in range (1,6):
    print("Row", i, "\t", end = "")

    for j in range(1,4):
        print(j + (i - 1) * 3, end = "\t")

    print()

#2D list

listNum = [[1, 2, 3],
           [4, 5, 6],
           [7, 8, 9]]
print(listNum[0])
print(listNum[2])
print(listNum[0][1]) #Row 1, Col 2
print(listNum[1][2]) #Row 2, Col 3

#2D List - Printing with Nested loops

listNum = [1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]
#Loops through rows
for i in range(0, 3):

    #Loops through columns
    for j in range(0, 4):
        print(listNum[i][j], end = "\t")

    print()

# List as argument
def doubleValue(a_nValue):
    a_nValue = a_nValue * 2

nVal = 5
doubleValue(nVal)
print(nVal)

#Exercise 4
print("exercise 4")

listWord = []
nLen = len(listWord)
listWord.clear()

def resetList(a_listWord, a_nSize, a_strValue):
    listWord = []
    listWord.clear()

    for i in range(0, a_nSize):
        listWord.append(a_strValue)
        for j in range(0, a_nSize):
            listWord.append(a_strValue)
    listWord = a_nSize


strAnswer = resetList(listWord, 7, "*")
print(strAnswer)