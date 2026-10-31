# @decorator =  add extra functionality to the 
#               function or methods without modify the original code


#decorator function
def log_function(func): 
    def wrapper():
        print(f"Calling function {func.__name__}")
        return func()  # Call the original function and return its result
    return wrapper

@log_function  # log_function is applied to say_hello()
def say_hello():
    return "Hello, World"

print(say_hello())  # This should print the log message and return "Hello, World"


#conclusion
# say_hello = log_function(say_hello)