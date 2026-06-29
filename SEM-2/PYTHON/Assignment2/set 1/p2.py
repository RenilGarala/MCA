f = open("medical_store.txt", "w")

max_name = ""
max_value = 0
total = 0
low = []

for i in range(5):
    id = input("Enter ID: ")
    name = input("Enter Name: ")
    price = float(input("Enter Price: "))
    qty = int(input("Enter Quantity: "))

    value = price * qty
    total = total + value

    if value > max_value:
        max_value = value
        max_name = name

    if qty < 10:
        low.append(name)

    f.write(id + " " + name + " " + str(price) + " " + str(qty) + " " + str(value) + "\n")

f.close()

print("Highest stock value medicine:", max_name)
print("Total store value:", total)
print("Low stock medicines:")
for i in low:
    print(i)