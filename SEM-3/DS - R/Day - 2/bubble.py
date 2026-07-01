# bubble sort 
marks = [4,3,5,6,8,7]
count = 0

for i in range(len(marks)):
    count=count+1

    isswap = False
    for j in range(len(marks) - i - 1):
        count=count+1
        if marks[j] > marks[j+1]:
            temp = marks[j]
            marks[j] = marks[j+1]
            marks[j+1] = temp
            isswap = True
        
    if(isswap == False):
        break

print("Sorted Marks:", marks)
print("Count:", count)