#weight converter

weight = float(input("Enter your weight: "))
unit = input("Enter Kilograms or Pounds (Kg or Lbs): ")

if unit == "Kg":
    weight = weight * 2.205
    unit = "Lbs"
    print(f"You weight is {round(weight, 1)} {unit}")

elif unit == "Lbs":
    weight = weight / 2.205
    unit = "Kg"
    print(f"You weight is {round(weight, 1)} {unit}")

else:
    print(f"{unit} is not valid!")

