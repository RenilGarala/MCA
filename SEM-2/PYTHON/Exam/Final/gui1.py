import tkinter as tk 
m = tk.Tk()
m.geometry("400x400")
m.title("intro")

def onSubmit():
    name = t1.get()
    gender = ""
    hobby = ""
    divison = m5.get()

    if m1.get() == 1:
        gender="male"
    elif m1.get() == 2:
        gender="female"
    else:
        gender="not available"

    if m2.get() == 1:
        hobby += "gym "
    if m3.get() == 1:
        hobby += "cricket "
    if m4.get() == 1:
        hobby += "singing "

    str1 = name + "\t"+ gender + "\t " +hobby + "\t" + divison
    label3.config(text="Data Stored")

    f = open("student.txt", "a")
    f.write(str1 + "\n")
    f.close()

#name
label1 = tk.Label(m, text="Enter name")
label1.place(x=10,y=10)

t1 =tk.Entry(m)
t1.place(x=100,y=10)

#gender
label2 = tk.Label(m, text="gender")
label2.place(x=10,y=50)

m1=tk.IntVar()
r1=tk.Radiobutton(m,text="male",variable=m1,value=1)
r1.place(x=100,y=50)

r2=tk.Radiobutton(m,text="female",variable=m1,value=2)
r2.place(x=160,y=50)

#checkbox
label4 = tk.Label(m,text="hobby")
label4.place(x=10,y=90)

m2=tk.IntVar()
m3=tk.IntVar()
m4=tk.IntVar()
c1=tk.Checkbutton(m,text="gym",variable=m2)
c1.place(x=100,y=90)
c2=tk.Checkbutton(m,text="cricket",variable=m3)
c2.place(x=180,y=90)
c3=tk.Checkbutton(m,text="singing",variable=m4)
c3.place(x=260,y=90)

divison = tk.Label(m,text="dropdown")
divison.place(x=10,y=130)

m5 = tk.StringVar()
m5.set("Select")
option = tk.OptionMenu(m, m5, "A", "B", "C", "D")
option.place(x=100,y=130)

#output
label3=tk.Label(m)
label3.place(x=10,y=300)

b1=tk.Button(m,text="submit",command=onSubmit)
b1.place(x=10,y=200)

m.mainloop()