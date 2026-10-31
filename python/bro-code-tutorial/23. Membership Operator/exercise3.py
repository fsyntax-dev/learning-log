email = input("Enter your email: ")

if "@" and "." in email:
    print("Valid email!")
else:
    print("Email is invalid!")