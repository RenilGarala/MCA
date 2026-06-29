def prime_check(nums):
    d = {}

    for n in nums:
        c = 0
        for i in range(1, n + 1):
            if n % i == 0:
                c += 1

        if c == 2:
            d[n] = "Prime"
        else:
            d[n] = "Not Prime"

    print("Dictionary:", d)

def even_odd_sum(nums):
    even = 0
    odd = 0

    for i in nums:
        if i % 2 == 0:
            even = even + i
        else:
            odd = odd + i

    print("Even Sum:", even)
    print("Odd Sum:", odd)

def unique_digits(nums):
    s = set()

    for i in nums:
        for j in str(i):
            s.add(j)

    print("Set:", s)

def multiply_reverse(nums):
    print("Multiply with reverse:")
    for i in nums:
        rev = int(str(i)[::-1])
        print(i * rev)

n = int(input("Enter how many numbers: "))
nums = []

for i in range(n):
    num = int(input("Enter number: "))
    nums.append(num)

prime_check(nums)
even_odd_sum(nums)
unique_digits(nums)
multiply_reverse(nums)