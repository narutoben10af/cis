import requests, bs4, openpyxl
import re
def getCoursesRaw():
    res = requests.get("http://www.tuj.ac.jp/ug/academics/semester-info/schedule/2019-spring-schedule.html")
    soup = bs4.BeautifulSoup(res.text, features="html.parser")
    courseTable = soup.find("table", id = "myTable")
    #Find rows and cells
    tableBody = courseTable.find("tbody")
    return tableBody

def getCourses(a_rawData):
    data = []
    courseRows = a_rawData.find_all("tr")
    for course in courseRows:
        cols = course.find_all('td')
        listData = []
        for col in cols:
            listData.append(col.text.strip())
            data.append(listData)
    return data

def getURL(a_strURL):
    urlSplit = a_strURL.split("?")
    strURL = urlSplit[0]
    return strURL
def getParams(a_strURL):
    urlSplit = a_strURL.split("?")
    lstParams = urlSplit[1]
    lstParams = lstParams.split("&")
    paramRes = {}
    for param in lstParams:
        lstValues = param.split("=")
        paramRes[lstValues[0]] = lstValues[1]
    return paramRes


def saveToExcel(a_data):
    wb = openpyxl.Workbook

    sheet = wb.active
    nMaxRow = sheet.max_row

    nMaxCol = sheet.max_column

    for i in range(1, nMaxRow + 1):
        for j in range(1, nMaxCol +1):
          sheet.cell(row = i, column = j).value = a_data[i][j]

    wb.save(a_data)
    print("done")


def getRemainingSeats(a_URL):
    seats = []
    a_URL = "https://prd-wlssb.temple.edu/prod8/bwckschd_tu.p_disp_detail_sched?term_in=201903&crn_in=38948"
    res = requests.get(a_URL)
    soup = bs4.BeautifulSoup(res.text, "html.parser")
    tableTag = soup.find("table", class_= "datadisplaytable")
    trSeats = tableTag.find_all("tr")[3]
    tdText = trSeats.find_all('td')[2].text
    # tableBody = courseTable3.find_all("tr")
    return tdText

    # print(tableBody)

test = getRemainingSeats("https://prd-wlssb.temple.edu/prod8/bwckschd_tu.p_disp_detail_sched?term_in=201903&crn_in=38948")
print(test, "Seats Left")

def findCoursesLinks(a_rawData, a_strProfessor):
    res = requests.get("http://www.tuj.ac.jp/ug/academics/semester-info/schedule/2019-spring-schedule.html")
    soup = bs4.BeautifulSoup(res.text, features="html.parser")

    tableTag2 = soup.find("table", id="myTable")

    tableData2 = []

    tableBody = tableTag2.find('tbody')

    tableRows2 = tableTag2.find_all('tr')
    listData2 = []
    tableData = []
    listData = []

    for row2 in tableRows2:
        tableCols2 = row2.find_all('td')

        for col2 in tableCols2:
            listData2.append(col2.text.strip())

    tableData2.append(listData2)

    nLen = len(listData2)
    tablehref = tableTag2.find_all('a')
    # print((tablehref[12]).get('href'))


    for i in range(0, nLen):
        if (a_strProfessor == listData2[i]):
            link = print(tablehref[i // 2].get('href'))

    return link
    # print(tableData)

    # for i in tableData2:
    #     for j in
    #     if(a_strProfessor == tableData2[i][j+8]):
    #         print(tableData2[i][j+10].get)
    # for row2 in tableRows2:
    #     tableCols2 = row2.find_all('td')
    #
    #     for col2 in tableCols2:
    #         listData2.append(col2.text.strip())
    #         if(a_strProfessor == col2):
    #             test = tablehref[row2*2].get('href')
    #
    #     print(test)

        # tableData2.append(listData)
    # print(tableData[100][2])
    # nLen = len(tableData)
    # for i in range(0, nLen + 1):
    #     if(a_strProfessor == tableData([i][8])):
    #         print(tablehref[i//2].get('href'))


def showRemainingSeats(a_rawData, a_strProfessor):
    seats = getRemainingSeats(findCoursesLinks(a_rawData, a_strProfessor))
    print("Seats Remaining:", seats)


getRemainingSeats("https://prd-wlssb.temple.edu/prod8/bwckschd_tu.p_disp_detail_sched?term_in=201903&crn_in=38948")
# findCoursesLinks("http://www.tuj.ac.jp/ug/academics/semester-info/schedule/2019-spring-schedule.html", "Karam, H.")
showRemainingSeats("http://www.tuj.ac.jp/ug/academics/semester-info/schedule/2019-spring-schedule.html", "Karam, H.")