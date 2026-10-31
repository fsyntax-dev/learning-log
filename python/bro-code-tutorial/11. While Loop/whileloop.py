#while loop = execute code WHILE some condition remains true

name = input("Enter your name: ")

while name == "": #user didn't input anything
    print("You didn't enter your name!")
    name = input("Enter your name: ") #asking back for input
    #while the condition remains true (user didn't input), the code execute forever asking for input

print(f"Hello {name}")

#while loop = if condition is true continue loop, if not it will exit

age = int(input("Enter your age: "))

while age <= 17:
    print("Your age isn't exceeds legal age.")
    age = int(input("Enter your age: "))

print("You are eligible to sign up!")

