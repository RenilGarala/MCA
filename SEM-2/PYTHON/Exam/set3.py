import pandas as pd
import tkinter as tk
import mysql.connector
import matplotlib.pyplot as plt

m = tk.Tk()
m.geometry("500x500")
m.title()

def onsubmit():
    matchid = t1.get()
    teamname = t2.get()
    runscore = t3.get()
    wicketlost = t4.get()
    overplayes = t5.get()
    result = ""

    if v1.get() == 1:
        result = "win"
    elif v1.get() == 2: 
        result = "lose"
    else:
        result = "tie"

   
    str= matchid +" "+ teamname +" "+ runscore +" "+ wicketlost +" "+ overplayes+" "+ result +"\n"
    label7.config(text=str)

    #store data in file
    f = open("cricker.txt","a")
    f.write(str)
    f.close()

    #database connectivity
    conn = mysql.connector.connect(
        host = "localhost",
        port = 3306,
        user = "root",
        password = "",
        database = "cricket"
    )
    cur = conn.cursor()

    # query = """
    #     create table crkt(
    #         matchid varchar(50),
    #         teamname varchar(50),
    #         runscore varchar(50),
    #         wicketlost varchar(50),
    #         overplayes varchar(50),
    #         result varchar(50)
    #     )
    # """
    # cur.execute(query)

    cur.execute("insert into crkt values(%s,%s,%s,%s,%s,%s)",
    (matchid,teamname,runscore,wicketlost,overplayes,result))

    conn.commit()
    conn.close()

def onread():
    conn = mysql.connector.connect(
        host = "localhost",
        port = 3306,
        user = "root",
        password = "",
        database = "cricket"
    )
    cur = conn.cursor()

    df=pd.read_sql_query("SELECT * FROM crkt", conn)
    print(df)

# Display:
#  Average runs scored by each team

    df["runscore"]=pd.to_numeric(df["runscore"])
    avg=df.groupby("teamname")["runscore"].mean()
    print(avg)

    # Win percentage of each team
    total_match = df.groupby("teamname")["result"].count()

    wins = df[df['result'] == "win"].groupby("teamname")["result"].count()
    print(wins)

    # bar char
    plt.bar(wins.index,wins.values)
    plt.show()

    # line chart
    plt.plot(wins.index,wins.values)
    plt.show()

    #histogram
    

    conn.commit()
    conn.close()


label7 = tk.Label(m, text="output")
label7.grid(row=10,column=1)

#matchid
label1 = tk.Label(m, text="Enter matchid")
label1.grid(row=1,column=1)

t1 = tk.Entry(m)
t1.grid(row=1,column=2)

#team name
label2 = tk.Label(m, text="Enter Teamname")
label2.grid(row=2,column=1)

t2 = tk.Entry(m)
t2.grid(row=2,column=2)

#runs scored
label3 = tk.Label(m, text="Enter Runs scored")
label3.grid(row=3,column=1)

t3 = tk.Entry(m)
t3.grid(row=3,column=2)

#wicket lost
label4 = tk.Label(m, text="Enter wicket lost")
label4.grid(row=4,column=1)

t4 = tk.Entry(m)
t4.grid(row=4,column=2)

#overplayes
label5 = tk.Label(m, text="Enter Overplayed")
label5.grid(row=5,column=1)

t5 = tk.Entry(m)
t5.grid(row=5,column=2)

#result
label6 = tk.Label(m, text="Enter result")
label6.grid(row=6,column=1)


v1 = tk.IntVar()
t6 = tk.Radiobutton(m,text="win",variable=v1,value=1)
t6.grid(row=6,column=2)
t7 = tk.Radiobutton(m,text="lose",variable=v1,value=2)
t7.grid(row=6,column=3)

button = tk.Button(m,text="submit",command=onsubmit)
button.grid(row=9,column=1)

button1 = tk.Button(m,text="read",command=onread)
button1.grid(row=11,column=1)

m.mainloop()