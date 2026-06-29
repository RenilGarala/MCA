def count_digits(nums):
    d = {}
    for i in nums:
        d[i] = len(str(i))
    print("Dictionary:", d)

def palindrome(nums):
    t = ()
    for i in nums:
        if str(i) == str(i)[::-1]:
            t = t + (i,)
    print("Palindrome numbers:", t)

def digit_sum(nums):
    total = 0
    for i in nums:
        for j in str(i):
            total = total + int(j)
    print("Sum of digits:", total)

def multiply(nums):
    print("After multiply by 10:")
    for i in nums:
        print(i * 10)

n = int(input("Enter how many numbers: "))
nums = []

for i in range(n):
    num = int(input("Enter number: "))
    nums.append(num)

count_digits(nums)
palindrome(nums)
digit_sum(nums)
multiply(nums)