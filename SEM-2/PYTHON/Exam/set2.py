import tkinter as tk
import mysql.connector
import pandas as pd
import matplotlib.pyplot as plt

m = tk.Tk()
m.geometry("400x400")
m.title("set 2")

def onsubmit():
    name1 = name.get()
    team1 = team.get()
    mid1 = mid.get()
    run1 = int(run.get())
    ball1 = int(ball.get())
    wickets1 = int(wicket.get())
    result1 = ""
    if m1.get()==1:
        result1 = "win"
    else: 
        result1 = "lose"

    conn = mysql.connector.connect(
        host="localhost",
        port=3306,
        user="root",
        password="",
        database="cricket"
    )

    cur = conn.cursor()

    # query="""
    #     create table cricket2(
    #         name varchar(50),
    #         team varchar(50),
    #         match_id varchar(10),
    #         runs int(20),
    #         ball_faced int(20),
    #         wicket int(10),
    #         result int(10)
    #     )         
    # """
    # cur.execute(query)

    # insert user given data in database 
    cur.execute("insert into cricket2 values(%s,%s,%s,%s,%s,%s,%s)",
    (name1,team1,mid1,run1,ball1,wickets1,result1))

    conn.commit()
    conn.close()

def readData():
    conn = mysql.connector.connect(
        host="localhost",
        port=3306,
        user="root",
        password="",
        database="cricket"
    )
    cur = conn.cursor()

    df=pd.read_sql_query("select * from cricket2",conn)
    print(df)

    conn.commit()
    conn.close()

# Strike rate of each player.
#  Top 5 players based on runs

    # task 1
    df["strike_rate"] = df["runs"] / df["ball_faced"] * 100
    strike_data = df.groupby("name")["strike_rate"].mean()

    # task 2
    most_run = df.groupby("name")["runs"].sum()
    print(most_run.head(5))

    # mat plot lib graphs
    # plt.bar(strike_data.index, strike_data.values)
    # plt.show()
    # plt.plot(strike_data.index, strike_data.values)
    # plt.show()

#Enter name
lable8=tk.Label(m,text="Enter player name")
lable8.grid(row=1,column=1)
name=tk.Entry(m)
name.grid(row=1,column=2)

#Team
lable2=tk.Label(m,text="Team name")
lable2.grid(row=2,column=1)
team=tk.Entry(m)
team.grid(row=2,column=2)

#Match ID
lable3=tk.Label(m,text="match id")
lable3.grid(row=3,column=1)
mid=tk.Entry(m)
mid.grid(row=3,column=2)

# Runs Scored
lable4=tk.Label(m,text="runs scored")
lable4.grid(row=4,column=1)
run=tk.Entry(m)
run.grid(row=4,column=2)    

#Balls Faced
lable5=tk.Label(m,text="balls faced")
lable5.grid(row=5,column=1)
ball=tk.Entry(m)
ball.grid(row=5,column=2)

# Wickets_Taken
lable6=tk.Label(m,text="wickets")
lable6.grid(row=6,column=1)
wicket=tk.Entry(m)
wicket.grid(row=6,column=2)

#mach result
lable7=tk.Label(m,text="result")
lable7.grid(row=7,column=1)
m1=tk.IntVar()
result=tk.Radiobutton(m,text="win",variable=m1,value=1)
result.grid(row=7,column=2)
result=tk.Radiobutton(m,text="lose",variable=m1,value=2)
result.grid(row=7,column=3)

#button
button=tk.Button(m,text="button",command=onsubmit)
button.grid(row=9,column=1)

button=tk.Button(m,text="read",command=readData)
button.grid(row=9,column=2)

m.mainloop()