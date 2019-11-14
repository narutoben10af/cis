import requests
from bs4 import BeautifulSoup

htmlFile = open("home.html")
htmlData = htmlFile.read()
htmlFile.close()

soup = BeautifulSoup(htmlData, "html.parser")
print(soup)


# prettify output
print(soup.prettify())

#Get the title tag
title = soup.title
print(title)

#Get the title text
titleText = soup.title.text
print(titleText)

divTag = soup.div #Will only get the first div
print(divTag)

divTagText = soup.div.text #Will only get the first div
print(divTagText)

#Get the div content
divTagFind = soup.find("div")
print(divTagFind)

#Get the div content of biglink2
divTag = soup.find("div", id = "biglink2")
print(divTag)

print("hi")
#Get the div content of biglink2
divTag = soup.find("div", id = "biglink2")

linkText = divTag.h2.a.text
print(linkText)



linkDescription = divTag.p.text
print(linkDescription)

print("hmm")
listDivTag = soup.find_all("div")
print(listDivTag)

print("space \n")

for divTag in listDivTag:
    linkText = divTag.h2.a.text
    print(linkText)

    linkDescription = divTag.p.text
    print(linkDescription)

    print()

#must have underscore after class

divTag = soup.find("div", class_ = "testing")
print(divTag)


#Get The Table
tableTag = soup.find("table") #will return the table
tableData = []
tableRows = tableTag.find_all("tr")
print(tableTag.prettify())
print(tableRows)

print()

for row in tableRows:
    tableCols = row.find_all('td') #find all td (cells)
    # The result is now a table of tags, we must take the
    #use the strip() method to remove surrounding spaces.
    listData = []

    for col in tableCols:
        listData.append(col.text.strip())

    tableData.append(listData)

#table data is a 2d list now
print(tableData)


#Getting a file from a server
import requests
from bs4 import BeautifulSoup
htmlFile = requests.get("http://first-web-scraper.readthedocs.io/en/latest/").text
# htmlFile = requests.get("http://www.tuj.ac.jp/ug/academics/semester-info/schedule/2019-spring-schedule.html").text

# soup = BeautifulSoup(htmlFile, "html.parser") #use html parser
#
# # print(soup.prettify())
#
# section = soup.find("h1")
#
# print(section)
#
#
# title = section.text
# print(title)
#
# section = soup.find_all("div", class_ = "section")
# print(section[1]) #second element in the list
# print(section[2].h2)
# print(section[2].h2.text)
#
# print(section[1].p.text)

#TUJ website
htmlFile = requests.get("http://www.tuj.ac.jp/ug/academics/semester-info/schedule/2019-spring-schedule.html").text
soup = BeautifulSoup(htmlFile, "html.parser") #use html parser

tableTag2 = soup.find("table", id = "myTable")

tableData2 = []

tableBody = tableTag2.find('tbody')

tableRows2 = tableTag2.find_all('tr')

for row2 in tableRows2:
    tableCols2 = row2.find_all('td')
    listData2 = []

    for col2 in tableCols2:
        listData2.append(col2.text.strip())

    tableData2.append(listData2)

# print(tableData2)
# print()
print(tableData2[1][10])
print(tableBody)
# for i in range(0, len(data)):
#     if(strName.lower() in data[i][8]