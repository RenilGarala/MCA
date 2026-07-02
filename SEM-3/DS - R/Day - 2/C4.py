dictionary_book = ["renil", "banana", "dog", "table", "ephemeral", "fish", "monkey", "netherland"]
word = "ephemeral"

left = 0
right = len(dictionary_book) - 1

for i in range(len(dictionary_book)):
    mid = (left + right)
    if(dictionary_book[mid]==word):
        print("found at : ", mid+1)
        break
    elif(word < dictionary_book[mid]):
        right=mid-1
    else:
        left=mid+1