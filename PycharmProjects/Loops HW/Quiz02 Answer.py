nMax = None
nNumber1 = int(input("Enter Number 1: "))
nNumber2= int(input("Enter Number 2: "))
nNumber3 = int(input("Enter Number 3: "))

if (nNumber1 < nNumber2):
        nMax = nNumber2
else:
    nMax = nNumber1

if (nMax < nNumber3):
    nMax = nNumber3

print("The max value is:", nMax)