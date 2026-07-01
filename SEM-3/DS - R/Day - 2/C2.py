marksheet = [32,53,78,94,56,89]
n = len(marksheet)

for i in range(n-1):
    max = marksheet[i]
    for j in range(i+1,n):
        if(marksheet[j]>max):
            temp = marksheet[j]
            marksheet[j] = max
            max = temp
            marksheet[i] = temp
    
print(marksheet)

print("top three student is ", marksheet[0],marksheet[1], marksheet[2])