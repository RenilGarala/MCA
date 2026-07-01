# bubble sort 
book_wight = [1.2,1.7,0.5,0.8,1.5,.0.4]
count = 0

for i in range(len(book_wight)):
    count=count+1

    isswap = False
    for j in range(len(book_wight) - i - 1):
        count=count+1
        if(book_wight[j] > book_wight[j+1]):
            temp = book_wight[j]
            book_wight[j] = book_wight[j+1]
            book_wight[j+1] = temp
            isswap = True
        
    if(isswap == False):
        break

print("Final Books Order is :", book_wight)
print("Count:", count)