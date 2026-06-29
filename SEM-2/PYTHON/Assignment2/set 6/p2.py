def expensive(name, price):
    max_price = price[0]
    product = name[0]

    for i in range(5):
        if price[i] > max_price:
            max_price = price[i]
            product = name[i]

    print("Most Expensive Product:", product)

def low_quantity(name, qty):
    print("Quantity less than 10:")
    for i in range(5):
        if qty[i] < 10:
            print(name[i])

def total_value(price, qty):
    total = 0

    for i in range(5):
        total = total + (price[i] * qty[i])

    print("Total Inventory Value:", total)

def supplier_count(supplier):
    d = {}

    for i in supplier:
        if i in d:
            d[i] = d[i] + 1
        else:
            d[i] = 1

    print("Supplier Count:", d)

f = open("Product_Inventory.txt", "w")

name = []
price = []
qty = []
supplier = []

for i in range(5):
    id = input("Enter Product ID: ")
    n = input("Enter Product Name: ")
    p = float(input("Enter Price: "))
    q = int(input("Enter Quantity: "))
    s = input("Enter Supplier Name: ")

    name.append(n)
    price.append(p)
    qty.append(q)
    supplier.append(s)

    f.write(id + " " + n + " " + str(p) + " " + str(q) + " " + s + "\n")

f.close()

expensive(name, price)
low_quantity(name, qty)
total_value(price, qty)
supplier_count(supplier)