def category_count(categories):
    d = {}
    for i in categories:
        if i in d:
            d[i] = d[i] + 1
        else:
            d[i] = 1
    print("Category Count:", d)

def highest_price(names, prices):
    max_price = prices[0]
    book = names[0]

    for i in range(5):
        if prices[i] > max_price:
            max_price = prices[i]
            book = names[i]

    print("Highest price book:", book)

def one_author(names, authors):
    print("Book with only 1 author:")
    for i in range(5):
        if len(authors[i]) == 1:
            print(names[i])

f = open("Library.txt", "w")

names = []
prices = []
authors = []
categories = []

for i in range(5):
    id = input("Enter Book ID: ")
    name = input("Enter Book Name: ")
    author = input("Enter Author Names separated by comma: ").split(",")
    price = float(input("Enter Price: "))
    pub = input("Enter Publication: ")
    cat = input("Enter Category: ")

    names.append(name)
    prices.append(price)
    authors.append(author)
    categories.append(cat)

    f.write(id + " " + name + " " + ",".join(author) + " " + str(price) + " " + pub + " " + cat + "\n")

f.close()

category_count(categories)
highest_price(names, prices)
one_author(names, authors)