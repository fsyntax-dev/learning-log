foods = {"Popcorn": 5.99,
         "Coleslaw": 3.59,
         "Pizza": 12.99,
         "Fries": 4.69,
         "Chips": 2.39,
         "Pretzel": 6.29}

drinks = {"Coca-cola": 2.99,
          "7-Up": 2.99,
          "Sprite": 2.99,
          "Lemonade Tea": 3.69,
          "Soda": 1.99,
          "Oreo Smoothie": 4.99}

cart = []
total = 0

# Show food menu
print("_______Food Menu_______")
for key, value in foods.items():
    print(f"{key:12} : RM {value:.2f}")
print("_______________________")

# Loop to input food
while True:
    food = input("Add food to cart (Q to Quit): ").capitalize()
    if food == "Q":
        break
    elif food not in foods:
        print("Not Available")
    else:
        cart.append(food)
        total += foods[food]

# Ask if user wants to add drinks
askdrink = input("Would you like to add drinks (Y/N): ").capitalize()

if askdrink == "Y":
    print("_______Drink Menu_______")
    for key, value in drinks.items():
        print(f"{key:12} : RM {value:.2f}")
    print("_______________________")

    while True:
        drink = input("Add drink to cart (Q to Quit): ").capitalize()
        if drink == "Q":
            break
        elif drink not in drinks:
            print("Not Available")
        else:
            cart.append(drink)
            total += drinks[drink]

# Display cart and total
print("_______Your Cart_______")
for item in cart:
    print(f"{item}")
print(f"Total: RM {total:.2f}")
print("_______________________")
