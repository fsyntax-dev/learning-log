def require_permission(func):
    def wrapper(user):
        if user != "admin":  
            return "Access Denied!"
        return func(user)  
    return wrapper

@require_permission
def secret_data(user): 
    return "Here is the secret data!"

user = input("Enter password: ").lower()

print(secret_data(user)) 

