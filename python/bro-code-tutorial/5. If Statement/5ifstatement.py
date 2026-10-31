# if statement = execute code IF the statement is true 
#                or 
#                ELSE do something else


age = int(input("Enter your age: "))

if age <= 17:
    print("You aren't eligible, you must be 18+ to sign up!")
elif age < 0: #check more condition
    print("Incorrect age")
else: #last resort
    print("You are eligible!")