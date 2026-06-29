def train_booking(train_no, names):
    num = input("Enter Train Number: ")
    print("Bookings:")
    for i in range(5):
        if train_no[i] == num:
            print(names[i])

def count_seats(train_no, seats):
    d = {}
    for i in range(5):
        if train_no[i] in d:
            d[train_no[i]] = d[train_no[i]] + seats[i]
        else:
            d[train_no[i]] = seats[i]
    print("Seats Booked:", d)

def total_fare(train_no, fare, seats):
    d = {}
    for i in range(5):
        total = fare[i] * seats[i]
        if train_no[i] in d:
            d[train_no[i]] = d[train_no[i]] + total
        else:
            d[train_no[i]] = total
    print("Total Fare:", d)

def route_count(source, dest):
    s = input("Enter Source: ")
    d = input("Enter Destination: ")
    count = 0

    for i in range(5):
        if source[i] == s and dest[i] == d:
            count += 1

    print("Count:", count)

f = open("Train_booking.txt", "w")

names = []
train_no = []
source = []
dest = []
fare = []
seats = []

for i in range(5):
    pid = input("Enter Passenger ID: ")
    name = input("Enter Passenger Name: ")
    tno = input("Enter Train Number: ")
    src = input("Enter Source: ")
    des = input("Enter Destination: ")
    fr = float(input("Enter Ticket Fare: "))
    st = int(input("Enter Seats: "))

    names.append(name)
    train_no.append(tno)
    source.append(src)
    dest.append(des)
    fare.append(fr)
    seats.append(st)

    f.write(pid + " " + name + " " + tno + " " + src + " " + des + " " + str(fr) + " " + str(st) + "\n")

f.close()

train_booking(train_no, names)
count_seats(train_no, seats)
total_fare(train_no, fare, seats)
route_count(source, dest)