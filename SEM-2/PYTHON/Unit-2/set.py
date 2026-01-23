"""
--------------------50. Write a Python program to store student roll numbers in a set and prepare the sets according to the requirement of the question
--------------------   a. Write a program to add new students to an existing class attendance set.

attendance = {101, 102, 103, 104, 105}
n=int(input("Enter number of student to add = "))

for i in range(n):
    roll = int(input("Enter roll number = "))
    attendance.add(roll)

print(attendance)

--------------------   b. Write a program to remove students who are absent from the attendance set.


attendance = {101, 102, 103, 104, 105}
n=int(input("Enter number of student to remove = "))

for i in range(n):
    roll = int(input("Enter roll number = "))
    if roll in attendance:
        attendance.remove(roll)

print(attendance)


--------------------51. Create a sets of Courses and write a program to check whether a given student is enrolled in a particular course or not.
--------------------   a. Write a program to find students who are enrolled in both the courses.

--------------------52. Create two sets of elective subjects chosen by the students. Write a program to find students who are enrolled in at least one of two elective subjects
--------------------   a. Write a program to find students who are enrolled only in Course A and not in Course B.
--------------------   b. Write a program to find students who participated in exactly one of two courses.
--------------------   c. Write a program to remove duplicate student from course sets.
--------------------53. Given the set
                        students = {"Amit", "Neha", "Riya", "Karan"}
                        write a Python program to check whether "Riya" is enrolled in the course.
--------------------54. Given the sets 
                        math_students = {"Amit", "Neha", "Riya"}
                        cs_students = {"Riya", "Karan", "Pooja"}
                        write a program to find students enrolled in both subjects.
--------------------55. Given the sets
                        club_A = {"Rahul", "Sneha", "Amit"}
                        club_B = {"Sneha", "Karan", "Pooja"}
                        write a program to find students who are members of at least one club.


"""


