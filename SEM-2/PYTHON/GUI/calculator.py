import tkinter as tk

m=tk.Tk()
m.geometry("500x600")
m.title("Addition")

def sum():
    a = value1.get()
    b = value2.get()
    c = int(a)+int(b)
    total.config(text=c)

def mul():
    a = value1.get()
    b = value2.get()
    c = int(a)*int(b)
    total.config(text=c)

def sub():
    a = value1.get()
    b = value2.get()
    c = int(a)-int(b)
    total.config(text=c)

def div():
    a = value1.get()
    b = value2.get()
    c = int(a)/int(b)
    total.config(text=c)

# first label and input box
label1 = tk.Label(m, text="Enter value 1 ")
label1.grid(row=0, column=0)

value1 = tk.Entry(m)
value1.grid(row=0, column=1)

#second label and input box
label2 = tk.Label(m, text="Enter value 2 ")
label2.grid(row=1, column=0)

value2 = tk.Entry(m)
value2.grid(row=1, column=1)

# btns for addition subtraction and division and multiplication
sumbtn = tk.Button(m,text="sum", command=sum)
sumbtn.place(x=0,y=100)

mulbtn = tk.Button(m,text="mul", command=mul)
mulbtn.place(x=70,y=100)

divbtn = tk.Button(m,text="div", command=div)
divbtn.place(x=140,y=100)

subbtn = tk.Button(m,text="sub", command=sub)
subbtn.place(x=210,y=100)



#third label and input box
label3 = tk.Label(m, text="Answer ")
label3.grid(row=2, column=0)

total = tk.Label(m, bg="grey", width="20")
total.grid(row=2, column=1)

m.mainloop()