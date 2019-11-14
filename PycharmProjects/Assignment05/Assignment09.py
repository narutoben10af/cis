import random


class Hangman:
#Exercise 1
    pass

    listOfWords = ["Apple", "Google", "Microsoft", "Facebook"]

    def __init__(self, a_strWord, a_strOriginalWord, a_cFiller, a_cGuess):
        self.listOfWords = listOfWords
        self.strWord = a_strWord
        self.strOriginalWord = a_strOriginalWord
        self.cFiller = a_cFiller
        self.cGuess = a_cGuess

    def chooseWord(self):
        self.listOfWords = listOfWords
        nLen = len(self.listOfWords)
        i = random.randrange(0, nLen)
        self.strWord = self.listOfWords[i]

        # return self.listOfWords

    def test(self):
        strWord = self.chooseWord()
        print(strWord)

    #Exercise 2
    def printAsString(self):
        for c in self.strWord:
            print(c, end = "")

    # listString = list(listOfWords)
    # printAsString(listString)

    print("\n")

    def resetString(self, a_nSize, a_cFiller):
        self.newList = []

        for i in range(0, a_nSize):
            self.newList.append(a_cFiller)

        # return self.newList

    # strString3 = resetString(3, "*")
    # print(strString3)

    #Exercise04

    def fillString(self):
        self.strOriginalWord
        self.cGuess
        nLen = len(self.a_strOriginalWord)
        self.nCount = 0
        len(a_listWord) == nLen
        for i in range (0, nLen):
            if(self.a_cGuess == self.a_strOriginalWord[i]):
                self.a_listWord[i] = self.a_strOriginalWord[i]
                self.nCount += 1

    # listWord = resetString(len(strWord), "-")
    # strFill = fillString(listWord,strWord, "G")

    # print(strFill)

    #Exercise05

    def countFiller(self):
        self.nCount = 0
        for i in range (0, len(self.listOfWords)):
            if(self.listOfWords[i] == self.cFiller):
                 self.nCount = (nCount + 1)


    #Exercise 06

    def mainLoop(self):
        self.strWord = self.chooseWord()
        # strOriWord = printAsString(strOriWord)
        # print(strOriWord)
        self.listMask = self.resetString()
        # print(listMask)
        nGuess = 6
        while(True):
            self.printAsString()
            print("")
            cUser = input("Guess a character: ")
            nFiller = self.fillString()
            self.nCount = self.countFiller()
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


# mainLoop()


# def main():
#     listOfWords = ["Apple", "Google", "Microsoft", "Facebook"]
#     test = Hangman("Hello", "Apple", '-', 'c')
#     strWord = test.chooseWord()
#     # strWord = test()
#     print(strWord)
# main()

Hangman = Hangman("hello", "test", '-', 'h')
Hangman.mainLoop()