strSentence = input("Insert your sentence")
strSearch = input("Search for a word in your sentence")
nRes = strSentence.find(strSearch)

if nRes >= 0:
    print("found")
else:
    print("not found")

