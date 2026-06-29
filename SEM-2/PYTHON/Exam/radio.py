import tkinter as tk

m = tk.Tk()
m.geometry("400x400")
m.title("data entry")

#form
#name label
label1 = tk.Label(m, text="Enter name");
label1.grid(row=1,column=1)
#name input
value1 = tk.Entry(m)
value1.grid(row=1, column=2)

tk.mainloop()