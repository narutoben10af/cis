for i in range(1,2):
	for j in range (1, 4):
		print(j, end = " ")

	print()

for i in range(2, 3):
	for j in range (1,4):
		print(j + 3, end = " ")

	print()

for i in range(3, 4):
	for j in range (1,4):
		print(j + 6, end = " ")

	print()


for i in range(1,2):
	for j in range (1, 10):
		print(j, end = "")
		if(j == 3):
			print("")
			continue
		if(j == 6):
			print("")
			continue
	print()



for i in range(1, 10, 3):
    for j in range(0, 3):
        print(i + j, end = " ")
    print()

for i in range(1, 4):
    for j in range(1, 4):
        print(j + (i - 1) * 3, end= "\t")
    print()

print()


for i in range(1, 4):
    for j in range(1, 4):
        print(i + (j - 1) * 3, end= "\t")
    print()

print()

for i in range(1, 4):
    for j in range(1, 2):
        print(i, end= "\t")
        print(i+3, end= "\t")
        print(i+6, end= "\t")
        print(i+9, end= "\t")

    print()

print()

for i in range(1, 4):
    for j in range(0, 3):
        print((i + (j * 3)), end = "\t")

    print()

print()
 

for j in range(1, 4):
    for i in range(1, 4):
        print(j + (i - 1) * 3, end= "\t")
    print()

