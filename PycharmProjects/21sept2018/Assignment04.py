#Exercise 01

import math

def quadSolver(a_nNuma, a_nNumb, a_nNumc):
    nDelta = ((a_nNumb) ** 2) - (4 * (a_nNuma) * (a_nNumc))
    if (nDelta >= 0):
        nX1 = (- a_nNumb - math.sqrt(nDelta)) / (2 * (a_nNuma))
        nX2 = (- a_nNumb + math.sqrt(nDelta)) / (2 * (a_nNuma))
        print("X1 = ", nX1)
        print("X2 = ", nX2)
    else:
        print("Not possible")

quadSolver(3,-11,-4)

#Exercise02

def countCharacters(a_strText, a_cChar):
    nCount = 0

    for i in range (0, len(a_strText)):
        if(a_strText[i] == a_cChar):
            nCount = nCount + 1

    return nCount

nResult = countCharacters("test", "t")
print(nResult)

#Exercise03

def removeChar(a_strWord, a_nPos):
    strSliced = ""
    nLen = len(a_strWord)
    for i in range(0, len(a_strWord)):
        # strSliced += a_strWord[i]
        a_strWord = a_strWord[0: a_nPos] + a_strWord[a_nPos + 1: nLen]
        return a_strWord



strRes = removeChar("hello", 3)
print (strRes)