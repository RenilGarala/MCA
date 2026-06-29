import sqlite3
import pandas as pd

con = sqlite3.connect("college.db")
cur = con.cursor()

cur.execute("create table student(id int, name text)")
cur.execute("create table marks(id int, marks int)")

cur.execute("insert into student values(1,'Renil')")
cur.execute("insert into student values(2,'Rahul')")

cur.execute("insert into marks values(1,85)")
cur.execute("insert into marks values(2,90)")

con.commit()

df1 = pd.read_sql("select * from student", con)
df2 = pd.read_sql("select * from marks", con)

df = pd.merge(df1, df2, on="id")
print(df)

con.close()