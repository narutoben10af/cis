# def greet(a_strName, a_strGreeting = "How is it going?"):
#     print("Hello", a_strName, ".", a_strGreeting)
# greet()
# greet("John")
# greet("How are you?")   # Will be considered the name!
# greet("Joe", "Are you OK?")

#
# m = [[1,2],[3,4],[5,6]]
# for row in m :
#     print(row)
# # j = len(m)
# # i = len(m[0])
# nLen = len(m)
# # rez = [[m[j][i]
# # print("\n")
# for x in range(0, nLen):
#     for y in range(0, nLen):
#         print(m[j][i])

listNumbers = [10, 20, 30, 40, 50, 60, 70]
listSliced = listNumbers[1:4]
print(listSliced)

listNumbers1 = [10, 20, 30]
listNumbers2 = [40, 50, 60, 70]
listAllNumbers = listNumbers1 + listNumbers2
print(listAllNumbers)
# Self concatenation
listNumbers1 = listNumbers1 + listNumbers2
print(listNumbers1)