
#Enclosed Scope = function inside of another function

def greet(first, last):
    def add_greeting():
        return (f"Hello, {first} {last}!")
    return add_greeting()

print(greet("John", "Doe")) 


