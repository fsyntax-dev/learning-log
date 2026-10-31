# Classes are used to create objects

#           +-----------+
#           |  Object   |
#           +-----------+
#           ↑           ↑
#       Attribute     Method
#       + Data        + Functionality  
#         - Color       - Change the color
#         - YSpeed      - Adjust the speed
#   
#   Method      = Inside a class
#   Function    = Outside a class
#
#

class Fruit:
                       #parameters
    def __init__(self, name, color): #method inside the class
        self.name   = name  #attribute 1     
        self.color  = color #attribute 2 

    def details(self):
        return f"The color of {self.name} is {self.color}"
        

def desc():
    print(f"The fruit name is {fruit_1.name} and the color is {fruit_1.color}")

                #arguments 
fruit_1 = Fruit("Apple", "Red")

desc()