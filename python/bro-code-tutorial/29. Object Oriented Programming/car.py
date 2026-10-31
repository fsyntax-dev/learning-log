class Car:
    #constructor 
    def __init__(self, model, year, colour, for_sale): #paramter 
        #this is attributes
        self.model      = model #instance variable = inside constructor
        self.year       = year
        self.colour     = colour
        self.for_sale   = for_sale
    #method = actions that object can perform
    #        = function that belong to the object
    
    def drive(self):
        print(f"You drive the {self.colour} {self.model}")

    def stop(self):
        print(f"You stop the {self.colour} {self.model}")
    
    def describe(self):
        print(f"{self.year} {self.colour} {self.model}")
    
    