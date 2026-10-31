#super ()   =   Function used in a child class to call methods 
#               from a parent class (superclass)
# class Super:
#       pass

# class Sub(Super):
#       pass

#short = recall the same code in parent without the same code


class Shape:
    def __init__(self, color, filled):
        self.color = color
        self.filled = filled

    def describe(self):
        print(f"The shape is {type(self).__name__}") 
        print(f"The color is {self.color}")
        print(f"{type(self).__name__} is {'filled' if self.filled else 'not filled'}")
        print("-" * 30)

class Circle(Shape):
    def __init__(self, color, filled, radius):
        super().__init__(color, filled)
        self.radius = radius

class Square(Shape):
    def __init__(self, color, filled, width):
        super().__init__(color, filled)
        self.width = width

class Triangle(Shape):
    def __init__(self, color, filled, width, height):
        super().__init__(color, filled)
        self.width = width
        self.height = height

# Creating objects
circle = Circle("red", True, 5)
square = Square("blue", True, 7)
triangle = Triangle("yellow", False, 5, 12)

# Calling describe() for each shape
circle.describe()
square.describe()
triangle.describe()
