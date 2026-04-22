
loan_amount = int(input("Enter the loan amount: "))
number_of_years = int(input("Enter the number of years: "))
customer_type = input("Enter the customer type (Regular / Senior Citizen): ")
interest_rate = 0

def check_user_input():
    if customer_type != "Regular" and customer_type != "Senior Citizen":
        print("enter valid customer type")

    if loan_amount <= 0:
        print("enter valid loan amount")

    if number_of_years <= 0:
        print("enter valid number of years")

    if number_of_years > 30:
        print("Loan tenure exceeds policy limit")

check_user_input()

# 2

if loan_amount <= 50000:
    interest_rate = 8
elif loan_amount > 50000 and loan_amount <= 200000:
    interest_rate = 10
elif loan_amount > 200000:
    interest_rate = 12

if customer_type == "Senior Citizen":
    interest_rate = interest_rate - 1

# 3 
# find a

p = loan_amount
r = interest_rate
t = number_of_years

print("applicable interest rate:", r)

a = p * (1 + r/100) ** t
print("Total Amount to be paid:", a)

interest = a - p
print("Simple Interest:", interest)

monthly_emi = a / (number_of_years * 12)
print("Monthly EMI:", monthly_emi)
