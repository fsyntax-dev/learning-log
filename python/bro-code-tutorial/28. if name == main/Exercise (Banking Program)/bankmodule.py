def show_balance():
    print(f"Your balance is RM {balance:.2f}")

def deposit():
    global balance  # Declare balance as global to modify it
    deposit_amount = float(input("Enter an amount: "))

    if deposit_amount < 0:
        print("That is not a valid amount.")
    else:
        balance += deposit_amount
        print(f"Successfully deposited RM {deposit_amount:.2f}")

def withdraw():
    global balance  # Declare balance as global to modify it
    withdraw_amount = float(input("Enter an amount: "))

    if withdraw_amount > balance:
        print("Insufficient funds")
        print(f"Please input an amount under RM {balance:.2f}")
    else:
        balance -= withdraw_amount
        print(f"Successfully withdrew RM {withdraw_amount:.2f}")
        print(f"Your current balance is {balance:.2f}")

# User Balance
balance = 0

if __name__ == '__main__':
    print("Running module directly!")