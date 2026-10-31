class Car:  # Class definition
    def __init__(self, brand, fuel_type):  # Default Constructor
        self.brand = brand  # Self refer to references variable
        self.fuel_type = fuel_type 

        # porsche = Car(references to variable porsche,"GT3 RS")
        
    def act(self): 
        self.statement = f"The car is {self.brand} and uses {self.fuel_type}."
        print(self.statement)

porsche = Car("911 GT3 RS", "Petrol")  # Creating an instance
tesla = Car("Cybertruck", "Electric")  # Another instance

print(porsche.brand) # Accessing an Instance Attribute
porsche.act()  # Calling the instance method
