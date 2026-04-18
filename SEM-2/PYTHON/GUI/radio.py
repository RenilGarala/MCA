import tkinter as tk
m=tk.Tk()
m.geometry("500x600")
m.title("Data Entry")

# database connection

#Form
#name label
label1 = tk.Label(m, text="Enter Name :")
label1.place(x=5, y=10)
#name input
value1 = tk.Entry(m)
value1.place(x=120,y=10)

#email label
label2 = tk.Label(m, text="Enter Email :")
label2.place(x=5, y=50)
#email input
value2 = tk.Entry(m)
value2.place(x=120,y=50)

#Gender Label
label3 = tk.Label(m, text="Enter Gender : ")
label3.place(x=5,y=90)
#radio input
v1=tk.IntVar()
r1 = tk.Radiobutton(m, text="Male", variable=v1, value=1)
r1.place(x=120,y=90)
r2 = tk.Radiobutton(m, text="Female", variable=v1, value=2)
r2.place(x=180,y=90)

#age label
label4 = tk.Label(m, text="Age : ")
label4.place(x=5, y=130)
#age input
value4 = tk.Entry(m)
value4.place(x=120,y=130)

#specialization label
label5 = tk.Label(m, text="Specialization : ")
label5.place(x=5, y=170)
#specialization inputs
v2=tk.IntVar()
v3=tk.IntVar()
v4=tk.IntVar()
v5=tk.IntVar()

c1 = tk.Checkbutton(m, text="Data Science", variable=v2)
c1.place(x=120,y=170)
c2 = tk.Checkbutton(m, text="Artifical Intiligent", variable=v3)
c2.place(x=200,y=170)
c3 = tk.Checkbutton(m, text="Web Development", variable=v4)
c3.place(x=280,y=170)
c4 = tk.Checkbutton(m, text="Cyber Security", variable=v5)
c4.place(x=360,y=170)

tk.Button

m.mainloop()

"""
name 
email
gender
age
specialization - (4 option)
submit button
"""