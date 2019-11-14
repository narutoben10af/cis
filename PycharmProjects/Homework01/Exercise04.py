strName = input("put your name lower case ")
strName2 = input("put your name but initial please put uppercase ")
if strName == strName2.casefold() : #casefold makes string 2 lower case for comparison
    print("same")
else:
    print("different")