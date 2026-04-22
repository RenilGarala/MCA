# f = open("file1.txt", "a")
# f.write("reni\n")
# f.close()

# f = open("file1.txt", "r")
# data = f.readlines()
# print(data)
# f.close()

f = open("file1.txt", "w")
f.write("abc def \nrenil")
f.close()

f = open("file1.txt", "r")
print(f.read())

f = open("file1.txt", "a")
f.write("\nxyz")
f.close()

f = open("file1.txt", "r")
print(f.read())
