def course_count(courses):
    d = {}

    for i in courses:
        if i in d:
            d[i] = d[i] + 1
        else:
            d[i] = 1

    print("Course Count:", d)

def highest_fee(names, paid):
    max_fee = paid[0]
    name = names[0]

    for i in range(5):
        if paid[i] > max_fee:
            max_fee = paid[i]
            name = names[i]

    print("Highest Fees Paid:", name)

def pending_fee(names, paid, total):
    print("Students with pending fees:")
    for i in range(5):
        if paid[i] < total[i]:
            print(names[i])

def total_collected(paid):
    total = 0
    for i in paid:
        total = total + i

    print("Total Fees Collected:", total)

f = open("Student_admission.txt", "w")

names = []
courses = []
paid = []
total = []

for i in range(5):
    no = input("Enter Admission Number: ")
    name = input("Enter Name: ")
    course = input("Enter Course: ")
    fee_paid = float(input("Enter Fees Paid: "))
    total_fee = float(input("Enter Total Fees: "))

    names.append(name)
    courses.append(course)
    paid.append(fee_paid)
    total.append(total_fee)

    f.write(no + " " + name + " " + course + " " + str(fee_paid) + " " + str(total_fee) + "\n")

f.close()

course_count(courses)
highest_fee(names, paid)
pending_fee(names, paid, total)
total_collected(paid)