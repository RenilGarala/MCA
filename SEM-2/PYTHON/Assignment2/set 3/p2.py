def count_type(types):
    d = {}
    for i in types:
        if i in d:
            d[i] = d[i] + 1
        else:
            d[i] = 1
    print("Account Type Count:", d)

def highest_balance(names, balances):
    max_balance = balances[0]
    name = names[0]

    for i in range(5):
        if balances[i] > max_balance:
            max_balance = balances[i]
            name = names[i]

    print("Highest Balance Customer:", name)

def saving_interest(names, types, balances):
    print("Saving Account with 5% Interest:")
    for i in range(5):
        if types[i].lower() == "saving":
            new_balance = balances[i] + balances[i] * 0.05
            print(names[i], new_balance)

def low_balance(names, balances):
    print("Balance less than 5000:")
    for i in range(5):
        if balances[i] < 5000:
            print(names[i])

f = open("Bank.txt", "w")

names = []
types = []
balances = []

for i in range(5):
    acc = input("Enter Account Number: ")
    name = input("Enter Name: ")
    typ = input("Enter Account Type: ")
    bal = float(input("Enter Balance: "))

    names.append(name)
    types.append(typ)
    balances.append(bal)

    f.write(acc + " " + name + " " + typ + " " + str(bal) + "\n")

f.close()

count_type(types)
highest_balance(names, balances)
saving_interest(names, types, balances)
low_balance(names, balances)



