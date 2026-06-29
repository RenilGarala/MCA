import tkinter as tk
import mysql.connector

m = tk.Tk()
m.geometry("500x500")
m.title("Data entry")

def onInsert():
    name = value1.get()
    email = value2.get()

    conn = mysql.connector.connect(
        host="localhost",
        port=3306,
        user="root",
        password="",
        database="Student")

    cur = conn.cursor()
    sql = "INSERT INTO student VALUES (%s,%s)"
    cur.execute(sql, (name, email))
    conn.commit()
    conn.close()


def onUpdate():
    name = value1.get()
    email = value2.get()

    conn = mysql.connector.connect(
        host="localhost",
        port=3306,
        user="root",
        password="",
        database="Student")

    cur = conn.cursor()
    sql = "UPDATE student SET email=%s WHERE name=%s"
    cur.execute(sql, (email, name))
    conn.commit()
    conn.close()


label1 = tk.Label(m, text="Enter name:")
label1.place(x=5, y=10)

value1 = tk.Entry(m)
value1.place(x=120, y=10)

label2 = tk.Label(m, text="Enter email:")
label2.place(x=5, y=50)

value2 = tk.Entry(m)
value2.place(x=120, y=50)

submit = tk.Button(m, text="Insert", command=onInsert)
submit.place(x=120, y=100)

update = tk.Button(m, text="Update", command=onUpdate)
update.place(x=200, y=100)

m.mainloop()