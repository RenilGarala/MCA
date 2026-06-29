import pandas as pd

df = pd.read_csv('/Users/renil/Coding/MCA/SEM-2/PYTHON/pandas/Employee_Data_3.csv')

# display only mariied employees
# print(df)

print(df[df['MaritalStatus'] == 'Single'])