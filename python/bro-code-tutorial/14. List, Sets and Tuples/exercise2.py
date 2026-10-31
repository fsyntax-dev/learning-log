foods = []
prices = []
total = 0

while True:
    food = input("Enter a food to buy (Q to Quit) (C to Calculate Total): ").strip()
    
    if food.upper() == "Q":
        print("Quitting Program...")
        break

    elif food.upper() == "C":
        total = sum(prices)  # sum all the prices in the list
        print(f"The bought items are: {foods}")
        print(f"The total cost is: ${total:.2f}")
    
    else:

        try:
            price = float(input(f"Enter the price of {food}: $ "))
            foods.append(food)          #add new element in the foods list
            prices.append(price)        #add new element in the prices list
            print(f"Added {food} with a price of ${price:.2f}")

        except ValueError:
            print("Invalid price. Please enter a number.")
