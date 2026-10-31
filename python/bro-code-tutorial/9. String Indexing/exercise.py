
identification_number = "010715-03-0051"

#indeitification structure
early_digits = identification_number    [ :6]
mid_digits = identification_number     [7:-5]
last_digits = identification_number    [-4: ]

# negative number means starts backwards

#extraction input
ex_input = int(input("Please input extraction structure (1 for Early, 2 for Middle or 3 for Last): "))

if ex_input == 1:
    (print(f"{early_digits}-**-****"))
elif ex_input == 2:
    (print(f"******-{mid_digits}-****"))
elif ex_input == 3:
    (print(f"******-**-{last_digits}"))
else:
    print("Please enter a valid instruction!")