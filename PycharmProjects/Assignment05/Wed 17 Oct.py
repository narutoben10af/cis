def max2(a_nNum1, a_nNum2):
    if(a_nNum1 < a_nNum2):
        a_nNum1 = a_nNum2

    nMax = a_nNum1

    return nMax

def max3(a_nNum1, a_nNum2, a_nNum3):
    nMax = max2(a_nNum1, a_nNum2)
    nMax = max2(nMax, a_nNum3)

    return nMax

def max4(a_nNum1, a_nNum2, a_nNum3, a_nNum4):
    nMax = max3(a_nNum1,a_nNum2, a_nNum3)
    nMax = max2(a_nNum1, a_nNum4)

    return nMax

def max5(a_nNum1, a_nNum2, a_nNum3, a_nNum4, a_nNum5):
    nMax = max3(a_nNum1,a_nNum2, a_nNum3)
    nMax = max3(nMax, a_nNum4, a_nNum5)

    return nMax

def max6(a_nNum1, a_nNum2, a_nNum3, a_nNum4, a_nNum5, a_nNum6):
    nMax = max5(a_nNum1,a_nNum2, a_nNum3, a_nNum4, a_nNum5)
    nMax = max2(nMax, a_nNum6)

    return nMax


def max10(a_nNum1, a_nNum2, a_nNum3, a_nNum4, a_nNum5, a_nNum6, a_nNum7, a_nNum8, a_nNum9, a_nNum10):
    nMax = max6(a_nNum1, a_nNum2, a_nNum3, a_nNum4, a_nNum5, a_nNum6)
    nMax = max5(nMax, a_nNum7, a_nNum8, a_nNum9, a_nNum10)

    return nMax



print(max2(2, 1))

print(max3(1, 2, 4))

print(max4(1, 2, 4, 8))

print(max5(1, 2, 4, 8, 16))

print(max10(1, 2, 4, 8, 16, 32, 64, 128, 256, 512))





def removeChar(a_strWord, a_nPos):
    nLen = len(a_strWord)
    a_strWord = a_strWord[0: a_nPos] + a_strWord[(a_nPos + 1): nLen]
    return a_strWord


print(removeChar("Hani", 2))

