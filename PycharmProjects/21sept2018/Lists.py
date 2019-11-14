listNumbers = [10, 20, 30, 40, 50, 60, 70]
listSliced = listNumbers[1:4]
print(listSliced)

listFruits = ["orange", "banana", "apple"]
nLen = len(listFruits)
print("There are", nLen, "fruits")

for i in range(0, nLen):
    print(listFruits[i])
# or
print()
for strFruit in listFruits:
    print(strFruit)

listNumbers2 = [4, 7, 2, 12, 8]
nMax = max(listNumbers2)
nMin = min(listNumbers2)
print("Max is", nMax)
print("Min is", nMin)

strText = "This is a string"
listTest = list(strText)
print(strText)
print(listTest)

#append()
#Syntax: list.append(element)

listFruits = ["orange, banana", "apple"]
print(listFruits)
listFruits.append("peach")
listFruits.append("plum")
print(listFruits)

#insert()
#Syntax: list.insert(index, element)
#A new element is added (the list grows)

listNumbers = [10, 20, 30, 40, 50]
listNumbers.insert(1, -5)
print(listNumbers)

#remove()
#Syntax: list.remove(element)
#Searches for the given element in the list and removes the first matching element

listNumbers = [10, 20, 30, 20, 10]
listNumbers.remove(20)
print(listNumbers)

#pop()
#Syntax: list.pop(index)
#Removes and returns the element at the given
#index from the list and returns it

listLanguages = ["C", "C++", "Java", "English", "Python"]
strLanguage = listLanguages.pop(3)
print(listLanguages)
print(strLanguage)

#clear()

#Syntax: list.clear()
#clears the list (Removes all elements)

listNumbers = [10, 20, 30, 40, 50]
print(listNumbers)
listNumbers.clear()
print(listNumbers)

#sort()
#Syntax: list.sort() or list.sort(reverse = True) -> descending order for reverse = true
#Sort the elements of the list in a specific order

listNumbers = [4, 7, 2, 12, 8]
listNumbers.sort()
print(listNumbers)

listNumbers.sort(reverse = True)
print(listNumbers)

#Exercise 01
listNumbers = []
nSize = int(input("add size: "))

for i in range(0, nSize):
    listNumbers.append(0)

print(listNumbers)

#Exercise 02
listName = []

while(True):
    strAnswer = input("Do you want to add a new name?")
    strAnswer = strAnswer.lower()
    if(strAnswer == "yes"):
        strName = input("add name")
        listName.append(strName)
    else:
        break

nLen = len(listName)

for i in range (0, nLen):
    # print(listName.pop(0))
    print(listName[i])

#Exercise 03


