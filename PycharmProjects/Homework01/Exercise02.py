nTemperature = int(input("Insert temperature"))
if (nTemperature >= 30):
    print("Hot")
elif (nTemperature >= 25):
     print("Warm")
elif(nTemperature >= 15):
    print("Cool")
else:
    print("Cold")

#OR

nTemperature = int(input("Insert temperature"))
if (nTemperature >= 30):
    print("Hot")
elif (nTemperature >= 25 and nTemperature < 30):
     print("Warm")
elif(nTemperature >= 15 and nTemperature < 25):
    print("Cool")
else:
    print("Cold")