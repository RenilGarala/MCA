import pandas as pd
import numpy as np

df = pd.read_csv('data.csv')


"""display total number of rows and column in the dataframe"""
print(df.shape)

"""display only 1st 3 row from dataframe"""
print(df.head(3))

"""dsplay only last 2 row from dataframe"""
print(df.tail(2))

"""Display 3rd to 7th row of the dsataframe"""
print(df[2:7])

"""5.Display all the rows in reverse order."""
print(df[::-1])

"""Display all column names of the dataframe."""
print(df.columns)

"""Display only name and age of all students from the dataframe"""
print(df[['ENAME', 'AGE']])

"""8.Display maximum and minimum marks from the dataframe."""
print(df.SALARY.max())
print(df.SALARY.min())

"""Display the statistical analysis of marks from the student dataframe"""
print(df.describe())

"""Display the name of the student having marks > 50."""
print(df[(df.SALARY > 50000)]['ENAME'])

"""Display the rollno and name of the student whose age is > 20"""
print(df[(df.AGE > 20)][['ENO','ENAME']])

"""12.Display the students having age between 20 and 25"""
print(df[(df.AGE > 20) & (df.AGE < 25)])

"""13.Display the name of the student who has scored maximum marks"""
print(df[df.SALARY == df.SALARY.max()]['ENAME'])

"""14.Display the students who have scored more than average marks (use mean)"""
print(df[(df.SALARY > df.SALARY.mean())])

"""15.Change the index in DataFrame and create a new Dataframe"""
new_df = pd.DataFrame(df, columns=[ 'ENO', 'ENAME', 'AGE', 'SALARY'])
print(new_df)

"""16.Modify the original DataFrame by changing the Index inplace."""
df.set_index('ENO', inplace=True)
# df.reset_index(inplace=True)
print(df)

"""17.Search for a particular row using index value"""
print(df.loc[1])

"""18.Reset the index"""
df.reset_index(inplace=True)
print(df)

"""19.Arrange all the students in alphabetical order of their names"""
print(df.sort_values('AGE'))

"""20.Arrange all the students according to their age in descending order"""
print(df.sort_values('AGE', ascending=False))

"""21. display missing mark with 0"""
df['AGE'] = df['AGE'].fillna(0, inplace=True)
print(df)

"""22.Display only those students who have scored more than 0. (drop the missing value row)"""
print(df[df.AGE > 0])
df['AGE'] = df['AGE'].replace(0,np.nan)
print(df['AGE'].dropna(inplace=True))

"""23.Display the DataFrame with suitable message for NaN value."""
print(df['AGE'].fillna('No data available', inplace=True))


# another data set
# data = {
#     'NAME': ['renil', 'sahil', 'rohan', 'priya', 'neha', 'raj','renil', 'sahil'],
#     'SUBJECT': ['maths', 'science', 'english', 'hindi', 'social', 'maths', 'science', 'english'],
#     'MARKS': [80, 90, 70, 33, 50, 40, 85, 10]
# }
# df1 = pd.DataFrame(data)

# """15. Find total number of pass students and fail students in each subject from above list use of groupby"""
# print(df1[df1.MARKS>40].groupby('SUBJECT')['MARKS'].count())

# """16. Find minimum and maximum marks of each subject"""
# print(df1.groupby('SUBJECT')['MARKS'].min())
# print(df1.groupby('SUBJECT')['MARKS'].max())


