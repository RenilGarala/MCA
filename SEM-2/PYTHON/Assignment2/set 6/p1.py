def mobile_dict(nums):
    d = {}

    for i in nums:
        if str(i).startswith("98") or str(i).startswith("99"):
            d[i] = "Airtel"
        elif str(i).startswith("97"):
            d[i] = "Jio"
        elif str(i).startswith("96"):
            d[i] = "VI"
        else:
            d[i] = "Other"

    print("Dictionary:", d)
    return d

def airtel_num(d):
    t = ()

    for i in d:
        if d[i] == "Airtel":
            t = t + (i,)

    print("Airtel Numbers:", t)

def count_provider(d):
    c = {}

    for i in d.values():
        if i in c:
            c[i] = c[i] + 1
        else:
            c[i] = 1

    print("Count:", c)

def sort_num(nums):
    nums.sort()
    print("Sorted:", nums)

n = int(input("Enter number of mobile numbers: "))
nums = []

for i in range(n):
    num = input("Enter mobile number: ")
    nums.append(num)

d = mobile_dict(nums)
airtel_num(d)
count_provider(d)
sort_num(nums)