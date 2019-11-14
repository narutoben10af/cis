def drawRect(a_nWidth, a_nHeight):
    strFill = "–"
    strFillHeight = "|"
    for col in range(0, a_nWidth):
        print(strFill, end = " ")
    print()

    for row in range(1, a_nHeight - 1):
        print(strFillHeight, end = " ")
        for col in range(1, a_nWidth-1):
            print(" ", end =" ")
        print(strFillHeight)

    for col in range(0, a_nWidth):
        print(strFill, end = " ")
    print()



drawRect(10, 8)
# drawRect(2, 10)

def maxMinDiff(a_numbersList):
    # listTest = a_numbersList.sort()
    nLen = len(a_numbersList)
    nMax = a_numbersList[0]
    nMin = a_numbersList[0]
    for i in range(1, nLen):
        if(nMax < a_numbersList[i]):
            nMax = a_numbersList[i]
        if(nMin > a_numbersList[i]):
            nMin = a_numbersList[i]
    nDifference = nMax - nMin
    return nDifference

listNum = [1, 3, 9, 3]
maxNum = maxMinDiff(listNum)
print(maxNum)

import re

def sumDigits(a_strWord):
    nLen = len(a_strWord)
    nSum = 0
    nSum2 = 0
    # listDigits = re.findall(r"\d", a_strWord)
    for c in a_strWord:
        if(c.isdigit() == True):
            listNum.append(c)
            nSum = nSum + int(c)
    print(listNum)
    return nSum

strWord = "ab34h392hew123"

nSum = sumDigits(strWord)
print(nSum)