#Regex
#regular expressions
#
# \d any number
## \d{1,3}
# \D anything but a number
# \s space
# \S anything but a space
# \w any character
# \W anything but a character
# . any character except for a new line
# \b white space around words
# \. a period

# {1,3} expecting 1 to 3 of
# {n} expecting n of
# + match 1 or more (will match only if there is 1 or more)
# ? match 0 or 1
# * match 0 or more
# $ match the end of a string
#regular expressions
#
# \d any number
## \d{1,3}
# \D anything but a number
# \s space
# \S anything but a space
# \w any character
# \W anything but a character
# . any character except for a new line
# \b white space around words
# \. a period

# {1,3} expecting 1 to 3 of
# {n} expecting n of
# + match 1 or more (will match only if there is 1 or more)
# ? match 0 or 1
# * match 0 or more
# $ match the end of a string
# ^ match at the beginning of a string
# | either of
# [] range

# \n new line
# \s space
# \t tab
# \r return

#example 1
#Find all digits

import re

strData = ''' Alice, is 15 years old, and Bob is 27 Years old. Charlie is 57, and his granfather, Dan, is 102.'''

listDigits = re.findall(r"\d", strData)
print(listDigits)

listAges = re.findall(r"\d{1,3}", strData)
print(listAges)

listCapitals = re.findall(r"[A-Z]", strData)
print(listCapitals)

print("hi")
listNames = re.findall(r"[A-Z][a-z]*", strData)
print(listNames)

listLetters = re.findall(r"\w+", strData)
print(listLetters)

listWords = re.findall(r"[A-Za-z]+", strData)
print(listWords)
print("hi")

listWord5 = re.findall(r"\w{5}", strData)
print(listWord5)

#or listWord5 = re.findall(r"[A-Za-z]{5}", strData)
# print(listWord5)

#finds all characters that are 5 characters in length
listWords5new = re.findall(r"\b\w{5}\b", strData)
print("5 character length word:", listWords5new)

#finds characters starting with y that are 5 characters long
listWords5y = re.findall(r"[y|Y]\w{4}", strData)
print(listWords5y)

strData2 = '''Alice's phone number is 080-1234-5678. She paid 5324 yen at the restaurant. Bob's phone number is 
070-9876-4321. He paid 15412 yen at the restaurant.'''

listHP = re.findall(r"\d{3}-\d{4}-\d{4}", strData2)
print(listHP)

listMoney = re.findall(r"\d+\s", strData2)
print(listMoney)

strData3 = "Alice's email is alice@gmail.com. Bob's is bob@yahoo.com."
listEmails = re.findall(r"\w+@\w+\.\w+", strData3)
print(listEmails)

strData4 = "1234-5678-1234-5678"

if not re.match(r"^(\d{4}[-]){3}\d{4}", strData4):
    print("Invalid credit card number")
else:
    print("Valid credit card number")

strCreditCard = input("Insert Credit number in format of 1234-5678-1234-5678: ")
if not re.match(r"^(\d{4}[-]){3}\d{4}", strCreditCard):
    print("Invalid credit card number")
else:
    print("Valid credit card number")

strEmail = input("Insert Email: ")
if not re.findall(r"\w+@\w+\.\w+", strEmail):
    print("Invalid email")
else:
    print("Valid email")

# ^ match at the beginning of a string
# | either of
# [] range

# \n new line
# \s space
# \t tab
# \r return

#example 1
#Find all digits

import re

strData = ''' Alice, is 15 years old, and Bob is 27 Years old. Charlie is 57, and his granfather, Dan, is 102.'''

listDigits = re.findall(r"\d", strData)
print(listDigits)

listAges = re.findall(r"\d{1,3}", strData)
print(listAges)

listCapitals = re.findall(r"[A-Z]", strData)
print(listCapitals)

print("hi")
listNames = re.findall(r"[A-Z][a-z]*", strData)
print(listNames)

listLetters = re.findall(r"\w+", strData)
print(listLetters)

listWords = re.findall(r"[A-Za-z]+", strData)
print(listWords)
print("hi")

listWord5 = re.findall(r"\w{5}", strData)
print(listWord5)

#or listWord5 = re.findall(r"[A-Za-z]{5}", strData)
# print(listWord5)

#finds all characters that are 5 characters in length
listWords5new = re.findall(r"\b\w{5}\b", strData)
print("5 character length word:", listWords5new)

#finds characters starting with y that are 5 characters long
listWords5y = re.findall(r"[y|Y]\w{4}", strData)
print(listWords5y)

strData2 = '''Alice's phone number is 080-1234-5678. She paid 5324 yen at the restaurant. Bob's phone number is 
070-9876-4321. He paid 15412 yen at the restaurant.'''

listHP = re.findall(r"\d{3}-\d{4}-\d{4}", strData2)
print(listHP)

listMoney = re.findall(r"\d+\s", strData2)
print(listMoney)

strData3 = "Alice's email is alice@gmail.com. Bob's is bob@yahoo.com."
listEmails = re.findall(r"\w+@\w+\.\w+", strData3)
print(listEmails)

strData4 = "1234-5678-1234-5678"

if not re.match(r"^(\d{4}[-]){3}\d{4}", strData4):
    print("Invalid credit card number")
else:
    print("Valid credit card number")

strCreditCard = input("Insert Credit number in format of 1234-5678-1234-5678: ")
if not re.match(r"^(\d{4}[-]){3}\d{4}", strCreditCard):
    print("Invalid credit card number")
else:
    print("Valid credit card number")

strEmail = input("Insert Email: ")
if not re.findall(r"\w+@\w+\.\w+", strEmail):
    print("Invalid email")
else:
    print("Valid email")
