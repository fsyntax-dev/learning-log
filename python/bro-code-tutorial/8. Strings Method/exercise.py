# validate user input
# 1. username is no more than 12 characters
# 2. username must not contain spaces
# 3. username must not contain digits

username = input("Enter a username: ")

if len (username) > 12:
    print("Username exceeds 12 characters")

elif not username.find(" ") == -1: 
    #solely username.find(" ") will return to -1
    print("Username can't contain spaces") #if the result is not -1 

elif not username.isalpha():
    print("Username can't contain digit")
    
else:
    print (f"Welcome {username}!")