#Winner Giveaway Selector

import random

options = ["Person1", "Person2", "Person3"]

while True:
    name = input("Any names want to be submit? (Q to Quit): ").capitalize()
    if name == "Q":
        break
    else:
        options.append(name)

option = random.choice(options)


print(f"The winner is {option}!")