# *args     = allows you to pass multiple non-key arguments
# **kwargs  = allows you to pass multiple keywords-arguements
#             * unpacking operator

def  add(*args): #*args collect positional arguement into a tuple
    total = 0
    for arg in args:
        total += arg
    return total

print(add(1,2,3,4,5))