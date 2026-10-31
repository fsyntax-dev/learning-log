#standard function manually set argument, 
# tapi *args utk flexible amount of argument dlm function
# **kwargs utk keyword mention dalam caller 

def customerinfo(*args, **kwargs):
    for arg in args:
        print(arg, end=" ")
    print()
    for value in kwargs.values():
        print(value, end=" ")

customerinfo("John", "Doe",
            no      ="No 10", 
            street  ="Jalan Panji", 
            zip     =16100, 
            city    ="Kota Bharu", 
            state   ="Kelantan",
            country ="Malaysia")