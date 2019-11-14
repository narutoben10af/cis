import math
#Structures are a combination of multiple variables

class Point:
    # pass

    def __init__(self, a_x, a_y):
        self.setCoordinates(a_x, a_y)

    #self is always the first argument of a method
    #we must at least include self if we dont have arguments

    def printPoint(self):
        print("x =", self.x)
        print("y =", self.y)
        print()

    def computeDistance(self, a_p):
        fDistanceSquare = ((a_p.x - self.x) ** 2) + ((a_p.y - self.y) **2 )
        fDistance = math.sqrt(fDistanceSquare)
        return fDistance
    def setCoordinates(self, a_x, a_y):
        self.x = a_x
        self.y = a_y

class Rectangle:
    def __init__(self, a_height, a_width):
        self.setDimensions(a_height, a_width)

    def setDimensions(self, a_height, a_width):
        self.height = a_height
        self.width = a_width

    def computeArea(self):
        nArea = self.width * self.height
        return nArea

    def computePerimeter(self):
        nPerimeter = self.width + self.width + self.height + self.height
        return nPerimeter

    def print(self):
        print("Height", self.height)
        print("Width", self.width)
        print("Area =", self.computeArea())
        print("Perimeter =", self.computePerimeter())

class Contact:
    def __init__(self, a_FirstName, a_LastName, a_Email, a_PhoneNumber):
        self.setContact(a_FirstName, a_LastName, a_Email, a_PhoneNumber)

    def setContact(self, a_FirstName, a_LastName, a_Email, a_PhoneNumber):
        self.firstName = a_FirstName
        self.lastName = a_LastName
        self.email = a_Email
        self.phonenumber = a_PhoneNumber

    def print(self):
        print("Last Name", self.lastName)
        print("First Name", self.firstName)
        print("Email", self.email)
        print("Phone Number", self.phonenumber)


def main():
    p1 = Point(10, 3)
    p1.setCoordinates(3, 5)

    p2 = Point(7, 3)

    p3 = Point(3, 5)
    p3.printPoint()

    p1.printPoint()
    p2.printPoint()
    fDistance = p3.computeDistance(p2)
    print("Distance =", fDistance)

    r1 = Rectangle(3, 5)
    r1.print()

    contact1 = Contact("Si Eian", "Lim", "limsieian@me.com", "05035930823")
    contact1.print()

main()