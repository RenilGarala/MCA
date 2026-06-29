import tkinter as tk
import pandas as pd
import mysql.connector
from tkinter import messagebox
import matplotlib.pyplot as plt

m = tk.Tk()
m.geometry("400x400")
m.title("Set1")

# submit function
def onSubmit():
    patient_id = id.get()
    patient_name = name.get()
    patient_age = age.get()
    patient_disease = disease.get()
    patient_bill = bill.get()

    conn = mysql.connector.connect(
        host="localhost",
        port=3306,
        user="root",
        password="",
        database="Medical"
    )

    cur = conn.cursor()

    cur.execute(
        "INSERT INTO madical VALUES (%s,%s,%s,%s,%s)",
        (patient_id, patient_name, patient_age, patient_disease, patient_bill)
    )

    conn.commit()
    conn.close()

    messagebox.showinfo("Success", "Data Inserted Successfully")


# read function
def readData():
    conn = mysql.connector.connect(
        host="localhost",
        port=3306,
        user="root",
        password="",
        database="Medical"
    )

    df = pd.read_sql_query("SELECT * FROM madical", conn)
    print("Data ====")
    print(df)

    #total bill per disease
    totalbill = df.groupby('disease')['bill'].sum()
    # print(totalbill)

    #abouve 50 age data 
    # print("abouve 50")
    # print(df[df['age'] > '50'])

    #barchart of patients per disease
    totalname = df.groupby('disease')['name'].count()
    print(totalname)

    # disease = totalname.index
    # count = totalname.values

    # plt.bar(disease, count)
    # plt.show()

    # Histogram of patient ages
    ageData = df['age']
    plt.hist(ageData, bins=5)
    plt.xlabel("Age")
    plt.ylabel("Frequency")
    plt.title("Histogram of Patient Ages")
    plt.show()

    conn.close()



# id label
l1 = tk.Label(m, text="Enter ID")
l1.grid(row=1, column=1)

id = tk.Entry(m)
id.grid(row=1, column=2)

# name
l2 = tk.Label(m, text="Enter Name")
l2.grid(row=2, column=1)

name = tk.Entry(m)
name.grid(row=2, column=2)

# age
l3 = tk.Label(m, text="Enter Age")
l3.grid(row=3, column=1)

age = tk.Entry(m)
age.grid(row=3, column=2)

# disease
l4 = tk.Label(m, text="Enter Disease")
l4.grid(row=4, column=1)

disease = tk.Entry(m)
disease.grid(row=4, column=2)

# bill
l5 = tk.Label(m, text="Enter Bill Amount")
l5.grid(row=5, column=1)

bill = tk.Entry(m)
bill.grid(row=5, column=2)

# buttons
submit = tk.Button(m, text="Submit", command=onSubmit)
submit.grid(row=10, column=1)

read = tk.Button(m, text="Read", command=readData)
read.grid(row=10, column=2)

m.mainloop()