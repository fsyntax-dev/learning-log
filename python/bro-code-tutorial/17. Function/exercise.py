import datetime

def display_inv(username, amount, due_date):
    print(f"Customer: {username}")
    print(f"Your bill is amount to ${amount:.2f}")
    print(f"The due date to settle this invoice is on {due_date}")

# Input from the user
nameint = input("Enter customer name: ")
amountint = float(input("Enter amount: "))  # Use float for monetary values
dateint = input("Enter due date (YYYY-MM-DD): ")

# Call the function with the correct arguments
display_inv(nameint, amountint, dateint)