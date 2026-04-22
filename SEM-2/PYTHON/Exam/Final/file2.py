# f  = open ("students.txt","r")
# data = f.read()
# print(data)

name = input("Enter your name: ")
rollno = int(input("Enter your roll number: "))
marks = int(input("Enter your marks: "))


def store_data():
    f = open("students.txt","a")
    f.write(name + " " + str(rollno) + " " + str(marks) + "\n")
    f.close()

store_data()

# def read_data():
#     f = open("students.txt", "r")
#     print(f.read())
#     f.close()

# read_data()

# def search_strudent():
#     searchrollno = int(input("Enter roll number"))
#     f = open("students.txt", "r")
#     isfound = False
#     for line in f:
#         # ["renil", "10", "34"]
#         ld = line.split()
#         if(searchrollno == int(ld[1])):
#             isfound= True
#             print("name: " +ld[0])
#             print("rollno: "+ ld[1])
#             print("makrs: "+ ld[2])
        
#     if(isfound == False):
#         print("student not found")
#     f.close()

# search_strudent()

def delete_record(deleterollnumber):
    f = open("students.txt", "r")
    new_data = []
    for line in f:
        # ["renil", "10", "34"]
        ld = line.split()
        if(deleterollnumber != int(ld[1])):
            new_data.append(line)
    f.close()

    f = open("students.txt", "w")
    f.writelines(new_data)
    f.close

deleterollnumber = int(input("enternumber for delete"))
delete_record(deleterollnumber)
