#object = a BUNDLE of releated variable (attributes) and methods (functions)
#object = attributes & function
#class = (blueprint) used to design the structure and layout of an object

from car import Car

car1 = Car("911 GT3 RS" , 2024, "Blue"  , True)
car2 = Car("SVJ"        , 2024, "Yellow", False )
car3 = Car("G63"        , 2024, "Black" , True )

#variable - .as attribute access operator - attribute

print(car1.model, car1.year, car1.colour, car1.for_sale)
print(car2.model, car2.year, car2.colour, car2.for_sale)
print(car3.model, car3.year, car3.colour, car3.for_sale)

car2.drive() 

car1.describe()