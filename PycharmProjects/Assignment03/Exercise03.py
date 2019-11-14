nAnswer = 0
nNum = int(input("Enter Number: "))
while(nNum >0):
        nNum = nNum // 10   #divide until less than 0 to coubt only the full value
        nAnswer = nAnswer + 1

print(nAnswer)
