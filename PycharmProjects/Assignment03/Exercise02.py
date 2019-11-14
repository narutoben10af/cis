import random
# strWord = input("word: ")
# strShuffle = list(strWord)
# random.shuffle(strShuffle)
# strResult = ''.join(strShuffle)
# print(strResult)

strWord = input("word: ")
nLen = len(strWord)
strSliced = ""
while(nLen > 0):
    nPos1 = random.randrange(nLen)
    strSliced += strWord[nPos1]
    strWord = strWord[0: nPos1] + strWord[nPos1 + 1: nLen]
    nLen = len(strWord)     #check if nLen is less than or equal to 0 to end loop

print(strSliced)