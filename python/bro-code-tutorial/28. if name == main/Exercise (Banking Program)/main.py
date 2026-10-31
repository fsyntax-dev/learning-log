import bankmodule

is_running = True

# Main menu loop
while is_running:
    print("\nCapital Capital")
    print("1. Show Balance")
    print("2. Deposit")
    print("3. Withdraw")
    print("4. Exit")

    try:
        choice = int(input("Enter your choice: "))
        match choice:
            case 1:
                bankmodule.show_balance()
            case 2:
                bankmodule.deposit()
            case 3:
                bankmodule.withdraw()
            case 4:
                is_running = False
            case _:
                print("Not a valid choice!")
    except ValueError:
        print("Please enter a valid number!")

print("Thank You! Have A Nice Day.")
