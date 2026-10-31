
class Animal:
    def __init__(self, name):
        self.name = name #attribute
        print(name)
    
    def meow(self, ):
        print("Meow")
    
    def bark(self):
        print("Woof")
        
animal = Animal("Abu")
