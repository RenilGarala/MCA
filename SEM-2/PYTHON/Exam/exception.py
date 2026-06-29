class NotTen(Exception):
    pass
    
try:
    n = 10
    if(n == 10):
        raise NotTen("you can not divide by 10")
except NotTen as m: 
    print(m)
finally:
    print("code completed")

