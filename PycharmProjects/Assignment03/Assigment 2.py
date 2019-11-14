#Exercise 1

import random
nRand = random.randint(1, 100)

nTries = 0

while(True):
    nGuess = int(input("Guess a number: "))
    nTries += 1
    if(nGuess > nRand):
        print("too high, try again!!")
    elif(nGuess < nRand):
        print("too low, try again!!")
    else:
        print("you got it!!")
        break

print(nTries)


#Exercise 2

strWord = input("word: ")
nLen = len(strWord)
strSliced = ""

while(nLen > 0):
    nPos1 = random.randrange(nLen)
    strSliced += strWord[nPos1]
    strWord = strWord[0: nPos1] + strWord[nPos1 + 1: nLen]
    nLen = len(strWord)     #check if nLen is less than or equal to 0 to end loop

print(strSliced)


#Exercise 3

nAnswer = 0
nNum = int(input("Enter Number: "))

while(nNum > 0):
        nNum = nNum // 10   #divide until less than 0 to coubt only the full value
        nAnswer = nAnswer + 1

print(nAnswer)
