import re
#Exercise 1
file1 = open("new.text", "w")
file1.write("Hello how are you you you you you you you \n")
# strString = "Hello how are you you you"
file1 = open("new.text", "r")
strData = file1.read()
listWord = strData.split()
print(listWord)

dictWord = {}
for i in listWord:
    dictWord[i] = 0

# print(dictWord)

# dictWord[listWord[i]] = {nCount}
# print(dictWord["Hello"])

for j in listWord:
    if j in dictWord:
        dictWord[j] += 1
    if j not in dictWord:
        dictWord[j] = 1

print(dictWord)

file1.close()


# for j in listWord:
#
#     if j not in dictWord:
#         dictWord[j] = 0
#     dictWord[j] += 1




#Exercise02
file1 = open("words.txt", "r")
strData = file1.read()

listWord = strData.split()
nLen = len(listWord)
print(nLen)

for i in range (0, nLen):
    listWord[i] = listWord[i].lower()

# print(listWord)

#words containing cats and dogs
nCount = 0
for i in range(0, nLen):
    if re.findall(r"cat|dog", listWord[i]):
        nCount += 1

print("Number of words containg cats or dogs:", nCount)

#Words  containing 4 characters
nCount = 0
for i in range(0, nLen):
    if re.findall(r"\b\w{4}\b", listWord[i]):
        nCount +=1

print("Number of words containing exactly 4 characters:", nCount)

#Do more words end in "ing" or "ion"?
nCountIng = 0
for i in range(0, nLen):
    if re.findall(r"([i][n][g]\b)", listWord[i]):
        nCountIng +=1

# print(nCountIng)

nCountIon = 0
for i in range(0, nLen):
    if re.findall(r"([i][o][n]\b)", listWord[i]):
        nCountIon +=1

# print(nCountIon)

if (nCountIng > nCountIon):
    print("There are more words ending with 'ing' than 'ion'")
else:
    print("There are more words ending with 'ist' than 'ion'")

#How many words contain a "q" not immediately followed by a "u"?
# nCount = 0
# strWord = "que"
# if re.findall(r"[q][u]", strWord):
#     nCount += 1
#
# print("testing", nCount)

nCountQ = 0
for i in range(0, nLen):
    if re.findall(r"[q]", listWord[i]):
        nCountQ +=1

nCountQu = 0
for i in range(0, nLen):
    if re.findall(r"[q][u]", listWord[i]):
        nCountQu += 1

nCountQnotU = nCountQ - nCountQu
print("Number of Q not followed by u is :", nCountQnotU)

#How many words with two vowels in a row are there?

nCount = 0
for i in range(0, nLen):
    if re.findall(r"[aeiou]+[aieou]+", listWord[i]):
        nCount +=1

print("Words with two vowels in a row:", nCount)

# OR
# nCount = 0
# for i in range(0, nLen):
#     if re.findall(r"[aeiou]{2}", listWord[i]):
#         nCount +=1
#
# print(nCount)


# How many words with at least two vowels are there?

nCount = 0



for i in range(0, nLen):
    if re.findall(r".*[aeiou]{1,}.*[aeiou]{1,}.*", listWord[i]):
        nCount +=1

print("Words with at least two vowels:", nCount)



#Exercise 03
def PasswordStrong(a_strPassword):
    nCount = 0

    if not re.match(r"\w{8}", strPassword):
        nCount = 0
    elif not re.match(r"^(.*\d)", strPassword):
        nCount = 0
    elif not re.match(r"(.*[A-Z])", strPassword):
        nCount =0
    elif not re.match(r"(.*[a-z])", strPassword):
        nCount =0
    else:
        nCount +=1

    if (nCount > 0):
        print("Password Strong")
    else:
        print("Password Weak")

# def PasswordStrong(a_strPassword):
#     nCount = 0
#     if not re.match(r"\w{8}", strPassword):
#         nCount = nCount
#     else:
#         if not re.match(r"[0-9]+[A-Z]+[a-z]+[@]*", strPassword):
#             nCount = nCount
#         else:
#             nCount += 1
#
#     if not re.match(r"\w{8}", strPassword):
#         nCount = nCount
#     else:
#         if not re.match(r"[A-Z]+[a-z]+[0-9]+[@]*", strPassword):
#             nCount = nCount
#         else:
#             nCount +=1
#     if not re.match(r"\w{8}", strPassword):
#         nCount = nCount
#     else:
#         if not re.match(r"[a-z]+[A-Z]+[0-9]+[@]*", strPassword):
#             nCount = nCount
#         else:
#             nCount +=1
#     if not re.match(r"\w{8}", strPassword):
#         nCount = nCount
#     else:
#         if not re.match(r"[0-9]+[a-z]+[A-Z]+[@]*", strPassword):
#             nCount = nCount
#         else:
#             nCount +=1
#
#     if not re.match(r"\w{8}", strPassword):
#          nCount = nCount
#     else:
#         if not re.match(r"[A-Z]+[0-9]+[a-z]+[@]*", strPassword):
#             nCount = nCount
#         else:
#             nCount +=1
#     if not re.match(r"\w{8}", strPassword):
#          nCount = nCount
#     else:
#         if not re.match(r"[A-Z]+[a-z]+[A-Z]+[a-z]+[0-9]+[@]*", strPassword):
#             nCount = nCount
#         else:
#             nCount +=1
#
#     if not re.match(r"\w{8}", strPassword):
#          nCount = nCount
#     else:
#         if not re.match(r"[0-9]+[A-Z]+[a-z]+[A-Z]+[a-z]+[0-9]+[@]*", strPassword):
#             nCount = nCount
#         else:
#             nCount +=1
#     if not re.match(r"\w{8}", strPassword):
#          nCount = nCount
#     else:
#         if not re.match(r"\d+[a-z]+[0-9]+[A-Z]+[a-z]+[0-9]+[@]*", strPassword):
#             nCount = nCount
#         else:
#             nCount +=1
#     if not re.match(r"\w{8}", strPassword):
#         nCount = nCount
#     else:
#         if not re.match(r"[a-z]+[A-Z]+[a-z]+[0-9]+[@]*", strPassword):
#             nCount = nCount
#         else:
#             nCount += 1
#
#
#     if (nCount > 0):
#         print("Password Strong")
#     else:
#         print("Password Weak")



strPassword = input("Insert Password: ")
PasswordStrong(strPassword)