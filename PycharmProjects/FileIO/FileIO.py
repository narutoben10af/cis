#Basic Writing
# file1 = open("test.text", "w")
# file1.write("This is a line \n")
# file1.write("This is another line\n")
# file1.write("This is one extra line\n")
#
# file1.close()

# file1 = open("test.text", "a")
# file1.write("New content added \n")
#
# file1.close()


#Basic reading

file1 = open("test.text", "r")

strData = file1.read()
print(strData)

file1.close()

#Reading a given size

file1 = open("test.text", "r")
print("Reading 4 bytes")
strData = file1.read(4)
print(strData)

print("\nReading 3 bytes")
strData = file1.read(3)
print(strData)

#tell() and seek()

nCurrentPos = file1.tell()
print("\nCurrent Position: ", nCurrentPos)

#Go to position 2 (starts from 0)
file1.seek(2)
print("\nReading 10 bytes")
strData = file1.read(10)
print(strData)


file1.close()

#Read line by line

file1 = open("test.text", "r")

strData = file1.readline()
print(strData, end = '')

strData = file1.readline()
print(strData)

file1.close()

#Read all lines using for loop
file1 = open("test.text", "r")

for strLine in file1:
    print(strLine, end = '')


file1.close()

#Read as lists with readlines() notice the s in lines

file1 = open("test.text", "r")

listRead = file1.readlines()
print(listRead)


print("\n", listRead[1])

file1.close()


#Count the number lines in a file without using readlines()
file1 = open("test.text", "r")
nCount = 0

for i in file1:
    print(i, end = '')
    nCount += 1

print(nCount)

file1.close()


#Exercise 2
file2 = open("new.text", "w")
strList = []

strFirst = input("Insert First Name")
strList.append(strFirst)
strLast = input("Insert Last Name")
strList.append(strLast)
nPhoneNumber = input("Insert Phone Number")
strList.append(nPhoneNumber)

nLen = len(strList)

for i in range(0, nLen):
    file2.write(strList[i] + "\t")

file2.close()

#Exercise 3
file2 = open("new.text", "r")

listRead = file2.read()
print(listRead)


file2.close()
