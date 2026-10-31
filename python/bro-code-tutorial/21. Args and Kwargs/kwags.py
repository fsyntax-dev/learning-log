

def print_address(**kwargs):
    for key, value in kwargs.items():
        print(f"{key + ":":<10}:{value}")

print_address(  no      ="No 10", 
                street  ="Jalan Panji", 
                zip     =16100, 
                city    ="Kota Bharu", 
                state   ="Kelantan",
                country ="Malaysia")