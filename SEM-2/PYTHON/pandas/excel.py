import pandas as pd

# read excel file
df1 = pd.read_excel('data.xlsx')
print(df1)

# read csv file
df = pd.read_csv('data.csv')
print(df)

# read dataframe file
df = pd.DataFrame({
    'A': [1, 2, 3], 
    'B': [4, 5, 6]
    }
)
print(df)

df = pd.DataFrame([
    {'name': 'renil', 'age': 20, 'city': 'delhi'},
    {'name': 'sahil', 'age': 21, 'city': 'mumbai'}
])
print(df)

df = pd.DataFrame([
    ['renil', 20, 'delhi'],
    ['sahil', 21, 'mumbai'],
    ['ab', 21, 'raj'],
], columns=['name', 'age', 'city'],index=['a', 'b'])
print(df)

print(df.shape)
rows, columns = df.shape
print("rows", rows)
print("columns", columns)
print(df.dtypes)

# print clumns name
print(df.columns)
#print index name
print(df.index)

#acess specific rows using sliceing 
print(df[0:1])
#reverse order
print(df[::-1])

#access specific columns
print(df['name'])
print(df[['name', 'age']])

#access rows from dataframe using head and tail
print(df1.head(1))
print(df1.tail(1))

#access specific column values
print(df.name)
print(df.age)
print(df['city'])

#find min and max from numeric column
print(df1.SALARY.min())
print(df1.SALARY.max())

# show statistics of numeric columns
print(df1.describe())

#double condition based selection
print(df1[(df1.SALARY > 5000) & (df1.ENO == 2)])

