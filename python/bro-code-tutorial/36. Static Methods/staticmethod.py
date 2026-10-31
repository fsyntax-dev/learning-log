#static method  = a method that belogn to a class rather than any object from that class
#                 Usuall used for general utility functions

# Instance methods  = Best for operations on instances of the class (objects)
# Static methods    = Best for utility functions that do not need access to class data 

# Instance Method
def get_info(self):
    return f"{self.name} = {self.position}"

# Static Method

def km2miles(kilometers):
    return kilometers * 0.621371

