while True:
    strSentence = input("write something")
    strSearch = input("Just search what u wrote")
    nRes = strSentence.find(strSearch)
    if nRes >= 0:
        print("found")
    else:
        print("not found")
        answer = input("do you want to repeat? yes or no")
        strYes = "yes"
        if answer == strYes:
            print("ok")
            continue
        else:
            break





