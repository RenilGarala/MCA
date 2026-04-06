import tkinter as tk

m=tk.Tk()
m.geometry("500x600")
m.title("Data Entry")

def join():
    first = value1.get()[0]
    second = value2.get()[0]
    third = value3.get()
    answer = first+". "+second+". "+third
    display.config(text=answer)

label1 = tk.Label(m, text="Enter First Name")
label1.grid(row=0, column=0)

value1 = tk.Entry(m)
value1.grid(row=0, column=1)

#second label and input box
label2 = tk.Label(m, text="Enter Middle Name ")
label2.grid(row=1, column=0)

value2 = tk.Entry(m)
value2.grid(row=1, column=1)

#third label and input box
label3 = tk.Label(m, text="Enter Last Name ")
label3.grid(row=2, column=0)

value3 = tk.Entry(m)
value3.grid(row=2, column=1)

#join btn
subbtn = tk.Button(m,text="sub", command=join)
subbtn.place(x=210,y=200)

#third label and input box
ans = tk.Label(m, text="Answer ")
ans.grid(row=3, column=0)

display = tk.Label(m, bg="grey", width="20")
display.grid(row=3, column=1)

m.mainloop()