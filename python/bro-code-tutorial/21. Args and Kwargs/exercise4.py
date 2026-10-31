# * for flexible argument   
# ** for keywords arguement
# *args and **kwargs need to mention in function before use


def order_pizza(size, *toppings, **details):
    print(f"Ordered a {size} pizza with the following toppings:")
    for topping in toppings:
        print(f"- {topping}")
    print("Detail of the order are:", end="\n")
    for key, value in details.items():
        print(f"{(key + ":").capitalize():<10}:{value}")

order_pizza("Large", "Peperoni", "Pineapple", delivery=True, tip=5) 