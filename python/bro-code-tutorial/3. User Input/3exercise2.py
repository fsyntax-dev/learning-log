#shopping cart program

item = input("Which one would like to buy?: ")
price = float(input("What is the price?: $ "))
quantity = int(input("How many would you like?: "))
total = price * quantity

print(f"You have bought {item} x {quantity}/s")
print(f"You cart total is ${total}")