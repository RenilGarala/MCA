"""

P1 > Take user input and create a menu driven program to perform mathematical operations like addition, subtraction, multiplication, division, integer division, power. Return values from the functions

def add(a, b):
    return a + b
def subtract(a, b):
    return a - b
def multiply(a, b):
    return a * b
def divide(a, b):
    return a / b

while(True):
    print("Menu:")
    print("1. Addition")
    print("2. Subtraction")  
    print("3. Multiplication")
    print("4. Division")
    print("5. Exit")
    choice = int(input("Enter your choice: "))

    if choice == 5:
        print("Exiting the program.")
        break
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))
    if choice == 1:
        print("Result:", add(num1, num2))
    elif choice == 2:
        print("Result:", subtract(num1 - num2))
    elif choice == 3:
        print("Result:", multiply(num1 * num2))
    elif choice == 4:
        print("Result:", divide(num1 / num2))
    else:
        print("Invalid choice")

P2 > Create functions to calculate 
Area of a rectangle = width * length
Area of a triangle = ½ * Height * Base
Area of a circle = pi*r*r

def area_rectangle(width, length):
    return width * length
def area_triangle(height, base):
    return 0.5 * height * base
def area_circle(radius):
    pi = 3.14159
    return pi * radius * radius

area_rectangle(5, 10) 
area_triangle(5, 10)
area_circle(7)

P3 > Create functions to convert decimal numbers to binary, octal and hexadecimal numbers. Always return values from the functions

def binary(dec):
    return bin(dec)

def octal(dec):
    return oct(dec)

def hexadecimal(dec):
    return hex(dec)

print(binary(20))
print(oct(20))
print(hex(20))

P4 > Write an UDF to return a list having only unique values by removing duplicate values from the provided input list.
Eg. Sample List : [1,2,3,3,3,3,4,5]
Unique List : [1, 2, 3, 4, 5]

def removeDuplicate(l1):
    tempTuple=set(l1)
    print(list(tempTuple))

removeDuplicate([1,2,3,3])

P5 > Write a Python function to multiply all the numbers in a list.

from functools import reduce
def multiplyList(l1):
    print(reduce(lambda x,y : x*y, l1))

multiplyList({1,2,6,8,5})

P6 > Write a UDF to check the inputted number is between specified range or not. 

def isBetween(num):
    if num > 10 and num < 100:
        print("inputted number is between range")
    else:
        print("inputted number is not between range")

num = int(input("Enter number = "))
isBetween(num)

P7 > Write a function to calculate total number of Uppercase and lowercase characters in the string.

def calLatter(str):
    upper = 0
    lower = 0
    for i in str:
        if i.isupper():
            upper=upper+1
        else:
            lower=lower+1
    print("upper is = ", upper)
    print("lower is = ", lower)

calLatter("RenilGarala")

P8 > Write an UDF to check if the user given number is a prime number or not

def isPrime(num):
    flag = 0
    for i in range(2,num):
        if(num%i==0):
            flag=1
            break
        
    if(flag==1):
        print("nmumber is not prime")
    else:
        print("number is prime")

isPrime(7)


P9 > Write a findString() function to find all the positions of occurrences of string2 in string1 and return that value. If string2 is not present in string1 then display suitable message.
Eg. Str1 = Hello all, Good Morning to all. (pass it as a parameter in the function)
       Str2 = all (pass it as a parameter, but f not passed take a default argument)
O/p: String 2 found at positions: [6, 27]


P13 > Create a lambda function that will return maximum of two numbers

a=10
b=20
s = (lambda a, b: a if a > b else b)(a, b)
print(s)


P14> Create a lambda function that will return maximum of three numbers

a=10
b=20
c=30
s = (lambda a,b,c: a if a>b and a>c else (b if b > c else c))(a,b,c)
print(s)

P15> Write a lambda function that takes one number and if the number is even, returns that number multiplied by 5 else if the number is odd, returns that number multiplied by 10

s = (lambda x: x*5 if x%2==0 else x*10)(9)
print(s)

---------------P16> Take a list of mixed elements and 
Write a lambda function to separate integer elements as an output list. 
Write another lambda function to separate string elements as an output list.

l1 = [10,"renil", 20.3, "rohit"]
l2 = lambda x: [x for x in l1 if type(x)==int]
print(l2(l1))

l1 = [10,"renil", 20.3, "rohit"]
l2 = lambda x: [x for x in l1 if type(x)==str]
print(l2(l1))

---------------P17> Modify the above program using filter()

l1 = [10,"renil", 20.3, "rohit"]
l2=list(filter(lambda x:type(x)==int,l1))
print(l2)

l1 = [10,"renil", 20.3, "rohit"]
l2=list(filter(lambda x:type(x)==str,l1))
print(l2)


---------------P18> Filter all vowels from the given string.

name = "renilpatel"
vowel= ["a", "e", "i", "o", "u"]
x = list(filter(lambda ch: ch in vowel, name))
print(x)

---------------P18> Filter all vowels from the given string.


"""

name = "renilpatel"
vowel= ["a", "e", "i", "o", "u"]
x = list(filter(lambda ch: ch in vowel, name))
print(x)


