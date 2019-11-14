file1 = open("file1.txt", "r")
strData = file1.read()
file1.close()

file2 = open("file2.txt", "w")
nLen = len(strData)

file2.write(strData[0:nLen//2])

file2.close()
