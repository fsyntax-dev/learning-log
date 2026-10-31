#return value = some value a function can pass 

def function_one(a, b): #accept two arguement
    c = a + b
    return c #this value will go to line 10(function_one(a, b))
#       |   
#       |
#       \
#        \
output = function_one(5,4) #fucntion_one is called here in this variable

print(output)