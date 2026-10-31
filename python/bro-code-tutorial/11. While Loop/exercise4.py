

x = int(input("Enter an integer: "))
y = 10

while x > y:
    x += 1  # Increment x
    print(f"{x} is bigger than {y}")  # Print only while the condition is true
    break

# Code after the while loop executes only once
else:
    print("x is not valid")
