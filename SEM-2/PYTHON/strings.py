"""

--------------------

print("I like \"python programming\" very much\n its my fav subject")

--------------------

str = "I like \"python programming\" very much\n its my fav subject"
print(str[str.index("v"):str.rindex("h")+1])

--------------------

str = "I like \"python programming\" very much\n its my fav subject"
print(str[len(str)-5 : len(str)+1])

--------------------

str = "I like \"python programming\" very much\n its my fav subject"
splitedStr = str.split("\n")
print(splitedStr[1])

--------------------

str1 = input("Enter String 1")
str2 = input("Enter String 2")
print(str1 + str2)

--------------------

num = int(input("Enter number"))
str = input("Enter string")

print(str*num)

--------------------

str = "I like \"python programming\" very much\n its my fav subject"
ch = input("Enter charector")

if(ch in str):
    print("number is exist")

--------------------


str = "I like \"python programming\" very much\n its my fav subject"

ch = int(input("1.find length of string\n2. string in upper case\n3. string in lower case\n4. print string with initial capital\n5. splite the string based on the charecter\nEnter choice = "))

match ch:
    case 1: 
        print(len(str))
    case 2:
        print(str.upper())
    case 3:
        print(str.lower())
    case 4: 
        print(str.capitalize())
    case 5:
        print(str.split(" "))
    case _:
        print("invalid")

--------------------

s1 = input("Enter string s1")
s2 = input("Enter string s2")

if(s2 in s1):
    print("s2 is present in s1")
else:
    print("s2 is not present in s1")

--------------------

s1 = input("Enter string s1 = ")
s2 = input("Enter string s2 = ")

if(s2 in s1):
    fpos = s1.index(s2)
    lpos = s1.rindex(s2)
    print("first occureance of s2 in s1 at " + str(fpos))
    print("last occureance of s2 in s1 at " + str(lpos))
else:
    print("s2 is not present in s1")

--------------------

s1 = input("Enter string s1 = ")
s2 = input("Enter string s2 = ")

if(s2 in s1):
    print(s1.count(s2))
else:
    print("s2 is not present in s1")

--------------------

s1 = input("Enter string s1 = ")
print(s1[::-1])

--------------------

"""


