laptops = [
    {"name": "HP", "price": 25000},
    {"name": "Lenovo", "price": 32000},
    {"name": "Dell", "price": 41000},
    {"name": "Acer", "price": 48000},
    {"name": "ASUS", "price": 52000},
    {"name": "MacBook Air", "price": 60000}
]
first = 0
last = len(laptops)-1

for i in range(len(laptops)):
    mid = (first+last)//2

    if(laptops[mid]['price'] >= 50000):
        last = mid-1
    else:
        first = mid+1

if(first < len(laptops)):
    print("first laptop is ", laptops[first]["name"])
else:
    print("Laptops not found")