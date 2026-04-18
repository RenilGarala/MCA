"""
    create a dataframe from csv file that contain the data for the sales of an electronic store product id, product name, city, state, total number(sold product), price, revenue, date of sale, and display the following:
"""

import pandas as pd
# Read the CSV file into a DataFrame
df = pd.read_csv('electronic.csv')


# 1.find the total amount of revenue generated in each state
revenue_by_state = df.groupby('STATE')['REVENUE'].sum()
print("Total revenue generated in each state:")
print(revenue_by_state)
