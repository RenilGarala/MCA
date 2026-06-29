import tkinter as tk
import pandas as pd
import matplotlib.pyplot as plt
import mysql.connector

m = tk.Tk()
m.geometry("500x500")
m.title("set 4")

#DATABASE CONNECTIVITY
def onsubmit():
    studid = i1.get()
    studname = i2.get()
    booktitle = i3.get()
    genre = i4.get()
    dayissued = i5.get()


    conn = mysql.connector.connect(
        host="localhost",
        port=3306,
        user="root",
        password="",
        database="book"
    )
    cur = conn.cursor()

    cur.execute("insert into bok values(%s,%s,%s,%s,%s)",
    (studid,studname,booktitle,genre,dayissued))

    conn.commit()
    conn.close()

def onread():
    conn = mysql.connector.connect(
        host="localhost",
        port=3306,
        user="root",
        password="",
        database="book"
    )
    cur = conn.cursor()

    df = pd.read_sql_query("select * from bok",conn)
    print(df)

    conn.commit()
    conn.close()

    print(df['booktitle'].value_counts())

    issuedbook=df.groupby("studentname")["dayissued"].count()
    print(issuedbook[issuedbook.values>10].head(3))

    # number of books issued per genre
    book_data = df.groupby("genre")["booktitle"].count()
    print(book_data)

    plt.bar(book_data.index, book_data.values)
    plt.show()


    for i in df.itertuple(index=False):
        cur.execute("INSERT INTO bok VALUES(%s, %s, %s)",
            tuple(i)
        )


#studentid
label1 = tk.Label(m, text="Enter studentid")
label1.grid(row=1,column=1)

i1 = tk.Entry(m)
i1.grid(row=1,column=2)

#studentname
label2 = tk.Label(m, text="Enter studentname")
label2.grid(row=2,column=1)

i2 = tk.Entry(m)
i2.grid(row=2,column=2)

#book title
label3 = tk.Label(m, text="Enter book tittle")
label3.grid(row=3,column=1)

i3 = tk.Entry(m)
i3.grid(row=3,column=2)

#genre
label4 = tk.Label(m, text="Enter genre")
label4.grid(row=4,column=1)

i4 = tk.Entry(m)
i4.grid(row=4,column=2)

#day issued
label5 = tk.Label(m, text="Enter day issued")
label5.grid(row=5,column=1)

i5 = tk.Entry(m)
i5.grid(row=5,column=2)

button= tk.Button(m,text="submit",command=onsubmit)
button.grid(row=7,column=1)

button1= tk.Button(m,text="read",command=onread)
button1.grid(row=7,column=2)
m.mainloop()