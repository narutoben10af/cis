import random
#Exercise 1
class Hangman:


    def chooseWord(self, a_listWords):
        self.listWord = ["Apple", "Google", "Microsoft", "Facebook"]
        self.nLen = len(listWord)
        nRand = random.randrange(self.nLen)
        return a_listWords[nRand]

    #Exercise 2
    def printAsString(self, a_listString):
        nLen = len(a_listString)

        for i in range(0, nLen):
            print(a_listString[i], end = "")

    # listString = list("Hello")
    # printAsString(listString)
    #
    # print("\n")

    def resetString(self, a_nSize, a_cFiller):
        self.listNumbers = []

        for i in range(0, a_nSize):
            self.listNumbers.append(a_cFiller)

        return self.listNumbers

    # strString3 = resetString(3, "*")
    # print(strString3)

    #Exercise04

    def fillString(self, a_listWord, a_strOriginalWord, a_cGuess):
        nLen = len(a_strOriginalWord)
        nCount = 0
        len(a_listWord) == nLen
        for i in range (0, nLen):
            if(a_cGuess == a_strOriginalWord[i]):
                a_listWord[i] = a_strOriginalWord[i]
                nCount += 1
        return nCount

    # listWord = resetString(len(strWord), "-")
    # strFill = fillString(listWord,strWord, "G")

    # print(strFill)

    #Exercise05

    def countFiller(self, a_listWord, a_cFiller):
        nCount = 0
        for i in range (0, len(a_listWord)):
            if(a_listWord[i] == a_cFiller):
                 nCount = (nCount + 1)

        return nCount

    #Exercise 06

    def mainLoop(self):
        strOriWord = self.chooseWord(self.listWord)
        # strOriWord = printAsString(strOriWord)
        # print(strOriWord)
        listMask = self.resetString(len(strOriWord), '-')
        # print(listMask)
        nGuess = 6
        while(True):
            self.printAsString(listMask)
            print("")
            cUser = input("Guess a character: ")
            nFiller = self.fillString(listMask, strOriWord, cUser)
            nCount = self.countFiller(listMask, '-')
            if(nFiller == 0):
                nGuess -= 1
                print("wrong guess, try again!")
                print("You have:", nGuess, "guesses left")
            if (nGuess == 0):
                print("You lose")
                print("the answer is: " + strOriWord)
                break;
            if(nCount == 0):
                print(listMask)
                print("You win");
                break;


Hangman = Hangman()
Hangman.mainLoop()