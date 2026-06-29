import tkinter as tk

m = tk.Tk();
m.geometry("500x600")
m.title("calculater")

def sum():
    v1 = input1.get()
    v2 = input2.get()
    c= int(v1)+int(v2)
    answer.config(text="Answer = "+str(c))

def sub():
    v1 = input1.get()
    v2 = input2.get()
    c= int(v1)-int(v2)
    answer.config(text="Answer = "+str(c))

def mul():
    v1 = input1.get()
    v2 = input2.get()
    c= int(v1)*int(v2)
    answer.config(text="Answer = "+str(c))

def div():
    v1 = input1.get()
    v2 = input2.get()
    c= int(v1)/int(v2)
    answer.config(text="Answer = "+str(c))

value1 = tk.Label(m, text="Enter value 1")
value1.place(x=10, y=20)

input1 = tk.Entry(m,highlightthickness="1", highlightbackground="white")
input1.place(x=100, y=20)

value2 = tk.Label(m, text="Enter value 2");
value2.place(x=10, y=50)

input2 = tk.Entry(m,highlightthickness="1", highlightbackground="white")
input2.place(x=100, y=50)

add = tk.Button(m, text="sum", command=sum)
add.place(x=10, y=90)

sub = tk.Button(m, text="sub", command=sub)
sub.place(x=10, y=120)

mul = tk.Button(m, text="mul", command=mul)
mul.place(x=10, y=150)

div = tk.Button(m, text="div", command=div)
div.place(x=10, y=180)

answer = tk.Label(m, text="Answer = ");
answer.place(x=100, y=90)

m.mainloop()