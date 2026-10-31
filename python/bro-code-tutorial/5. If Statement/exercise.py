#python calculator

# += addition
# -= subtraction
# *= multiplication
# /= division

operator = input("Please choose an operator (+, -, *, /): ")

num1 = int(input("Enter the 1st number: "))
num2 = int(input("Enter the 2nd number: "))

if operator == "+":
    result = num1 + num2
    print(result)
elif operator == "-":
    result = num1 - num2
    print(result)
elif operator == "*":
    result = num1 * num2
    print(result)
elif operator == "/":
    result = num1 / num2
    print(result)
else:
    print(f"{operator} is not a valid operator!")