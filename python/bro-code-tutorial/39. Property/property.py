# @property  =  Decorator used to define a method as a property
#               Can be accessed like an attribute
# Benefit    =  Add additional logic when read, write, or delete attributes
#               Getter, Setter and Deleter Method

class Rectangle:
    def __init__(self, width, height):
        self._width = width
        self._height = height

    @property
    def width(self):
        if hasattr(self, "_width"):
            return f"{self._width:.1f} cm"
        return "Width has been deleted"

    @property
    def height(self):
        if hasattr(self, "_height"):
            return f"{self._height:.1f} cm"
        return "Height has been deleted"

    @width.setter
    def width(self, new_width):
        if new_width > 0:
            self._width = new_width
        else:
            print("Width must be greater than 0")

    @height.setter
    def height(self, new_height):
        if new_height > 0:
            self._height = new_height
        else:
            print("Height must be greater than 0")

    @width.deleter
    def width(self):
        if hasattr(self, "_width"):
            del self._width
            print("Width has been deleted")

    @height.deleter
    def height(self):
        if hasattr(self, "_height"):
            del self._height
            print("Height has been deleted")

# Test Case
rectangle = Rectangle(3, 4)

rectangle.width = 5
rectangle.height = 5

del rectangle.width  # Deletes _width
print(f"The width is {rectangle.width}")  # Now returns "Width has been deleted"
print(f"The height is {rectangle.height}")  # Still exists
