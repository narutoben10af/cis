import requests
import bs4
from bs4 import BeautifulSoup

class Course:
    def __init__(self, a_strDep, a_nCRN, a_strCourse, a_nPrior, a_strGenEd, a_strTitle, strCredit, a_strDateTime, a_strInstructor, a_strSpecialInfo):
        self.setCourse(a_strDep, a_nCRN, a_strCourse, a_nPrior, a_strGenEd, a_strTitle, strCredit, a_strDateTime, a_strInstructor, a_strSpecialInfo)

    def setCourse(self, a_strDep, a_nCRN, a_strCourse, a_nPrior, a_strGenEd, a_strTitle, strCredit, a_strDateTime, a_strInstructor, a_strSpecialInfo):
        self.strDep = a_strDep
        self.nCRN = a_nCRN
        self.strTitle = a_strTitle
        self.strCourse = a_strCourse
        self.nPrior = a_nPrior
        self.strGenEd = a_strGenEd
        self.strCredit =  strCredit
        self.strDateTime = a_strDateTime
        self.strInstructor = a_strInstructor
        self.strSpecialInfo = a_strSpecialInfo

    def findDepartment(self, a_strDep):
        if(self.strDep.lower() == a_strDep.lower()):
            return a_strDep.lower() in self.strDep.lower()
        else:
            return False

    def findTitle(self, a_strTitle):
        if(a_strTitle.lower() == self.strTitle.lower()):
            return a_strTitle.lower() in self.strTitle.lower()
        else:
            return False

    def findCredit(self, a_strCredit):
        if(self.strCredit.lower() == a_strCredit.lower()):
            return a_strCredit.lower() in self.strCredit.lower()
        else:
            return False

    def findInstructor(self, a_strInstructor):
        if(self.strInstructor.lower() == a_strInstructor.lower()):
            return a_strInstructor.lower() in self.strInstructor.lower()
        else:
            return False

    def printRow(self):
        print(self.strCourse, end = "\t")
        print(self.strTitle, end = "\t")
        print(self.strDep, end = "\t")
        print(self.strCredit)

s = Course("Hello", "Professor", "Hani", "Karam","Bacani", "Hady", "Kahy", "Dennis", "Instructor", "testing")
s2 = Course("Hello", "Hello", "Test", "Hmm","Ohh", "ahaha", "idk", "i see", "Apple", "testing")
s3 = Course("Ho", "Ha", "Hi", "o","Na", "ni", "idk", "i see", "Apple", "testing")

s.findInstructor("Instructor")
#s.printRow()


class CourseList:
    def getCoursesRaw(self):
        res = requests.get("http://www.tuj.ac.jp/ug/academics/semester-info/schedule/2019-spring-schedule.html")
        soup = bs4.BeautifulSoup(res.text, features="html.parser")
        courseTable = soup.find("table", id="myTable")
        # Find rows and cells
        tableBody = courseTable.find("tbody")
        return tableBody

    def getData(self):
        htmlFile = requests.get("http://www.tuj.ac.jp/ug/academics/semester-info/schedule/2019-spring-schedule.html").text
        soup = BeautifulSoup(htmlFile, "html.parser")  # use html parser

        tableTag2 = soup.find("table", id="myTable")

        tableData2 = []

        tableBody = tableTag2.find('tbody')

        tableRows2 = tableBody.find_all('tr')

        for row2 in tableRows2:
            tableCols2 = row2.find_all('td')
            listData2 = []

            for col2 in tableCols2:
                listData2.append(col2.text.strip())

            self.tableData2.append(listData2)

        return tableData2

    def __init__(self):
        self.listOfCourses = []
        self.tableData2 = []
        self.tableBody = None

    def addCourse(self, a_Course):
        self.listOfCourses.append(a_Course)

    def fillList(self):
        self.getData()
        nLen = len(self.tableData2)

        for i in range(0, nLen):
            course = Course(self.tableData2[i][0],self.tableData2[i][1],self.tableData2[i][2],self.tableData2[i][3],self.tableData2[i][4],self.tableData2[i][5],self.tableData2[i][6],self.tableData2[i][7],self.tableData2[i][8], self.tableData2[i][9])
            self.addCourse(course)

    def print(self):
        self.getData()
        for course in self.listOfCourses:
            course.printRow()

    def printByDepartment(self, a_strDep):
        for course in self.listOfCourses:
            if (course.findDepartment(a_strDep)):
                course.printRow()

    def printByTitle(self, a_strTitle):
        for course in self.listOfCourses:
            if (course.findTitle(a_strTitle)):
                course.printRow()

    def printByInstructor(self, a_strInstructor):
        for course in self.listOfCourses:
            if (course.findInstructor(a_strInstructor)):
                course.printRow()


# a = CourseList()
# a.addCourse(s)
# a.addCourse(s2)
# a.addCourse(s3)
# # a.print()
#
# a.printByInstructor("Apple")
# a.printByDepartment("Hello")

n = CourseList()
# test = n.getData()
# print(test)
test = n.fillList()
n.print()