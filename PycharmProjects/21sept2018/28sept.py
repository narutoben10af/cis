#Functions
# def functionName(parameters):
#     statements

#Basic Function
def PrintGreeting(a_strGreeting):
    print(a_strGreeting)
    input = ("Hello Python student!")

PrintGreeting("Hello") #call it here

def greet(a_strName, a_strGreeting):
    print("Hello", a_strName, ".", a_strGreeting)

greet("Jin", "How old are you?")


def f(a_fx):
    fY = (a_fx ** 2) + 1
    return fY

fY1 = f(3)
print(fY1)
print(f(4))

def absoluteValue(a_nValue):
    nAbsValue = None

    if (a_nValue  >= 0):
        nAbsValue = (a_nValue)

a = 5
b = 6
nMax = None
if(a < b):
    nMax = b
else:
    nMax = a

e = 7
f = 119
nMax = None

if (e < f):
    nMax = e
    print("The maximum us the second value")
else:
    nMax = f
    print("The maximum is the first value")

def max2(a_nVal1, a_nVal2):
    nMax = None

    if (a_nVal1 < a_nVal2):
        nMax = a_nVal2
        print("The max is the value:")

def greet(n = "there", g = "how is it going?"):
    print("hello")


    #Global variable example
strText = "Hello"

def printText():
    print(strText);

#local variable example
def printText():
    strText = "Hello"
    print(strText)


strText = "Hello"
print(strText)
print(strText)


def max2(a_nVal1, a_nVal2):
    nMax = None

    if (a_nVal1 < a_nVal2):
        nMax = a_nVal2
        print("The max is the value:")
    else:
        nMax = a_nVal1
    return nMax

def max3(a_nVal1, a_nVal2, a_nVal3):
    nMax = None

    nMax = max2(a_nVal1, a_nVal2)
    nMax = max2(nMax, a_nVal3)

    return nMax

def max4(a_nVal1, a_nVal2, a_nVal3, a_nVal4):
    nMax = None

    nMax = max2(a_nVal1, a_nVal2)
    nMax2 = max2(a_nVal3, a_nVal4)
    nMax = max2(nMax, nMax2)

    return nMax

nNum = max4(3, 4, 5, 6)
print(nNum)
