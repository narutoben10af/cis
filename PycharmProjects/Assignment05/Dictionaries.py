#creating dictionaries - retrieving items by key

dicEmpty = {}

dictCountries = {"Japan" : "Tokyo", "France" : "Paris", "Germany" : "Berlin"}

strCapital = dictCountries["France"]
print(strCapital)

#Adding new element

dictCountries["Italy"] = "Rome"
dictCountries["China"] =

#Length of a dictionary (the number of pairs)

nLen = len(dictCountries)
print(nLen)

#Iteration
for strCountry in dictCountries:
    print(dictCountries[strCountry])


#Popping an item

strCapital = dictCountries.pop("France")
print(strCapital)
print(dictCountries)

#Getting the collection of keys
keys = dictCountries.keys()
print(keys)

#They keys collection cannot be used programmatically (it is neither list or string so only can be displayed)

#Getting the collection of values

values = dictCountries.values()
print(values)

#They values collection cannot be used programmatically (it is neither list or string so only can be displayed)

#update dictionary

dictCountries["Japan"] = "Toko"
strCapital2 = dictCountries["Japan"]
print(strCapital2)

#Length of a dictionary (the number of pairs)

nLen = len(dictCountries)
print(nLen)


#Clearing dictionary
dictCountries.clear()
nLen = len(dictCountries)
print(nLen)


#Keys and values can be of any type
dictDoubles = {1 : 2, 2 : 4, 3 : 6, 4 : 8, 5 : 10}
nValue = dictDoubles[3]
print(nValue)

