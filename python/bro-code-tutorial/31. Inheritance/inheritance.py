#inheritance =  Allows a class to inherit attributes and methods from another class
#               Helps with code reusability and extensibility
#               class Child(Parent)

class Animal:
    #constructor (parameter)
    def __init__(self, name):
        #attributes
        self.name   = name
        self.alive  = True
        
    def eat(self):
        print(f"{self.name} is eating")
    
    def sleep(self):
        print(f"{self.name} is sleeping")

#inherit class child(parent)
class Dog(Animal):
    pass

class Cat(Animal):
    pass

class Mouse(Animal):
    pass

dog = Dog("Scooby")
cat = Cat("Garfield")
mouse = Mouse("Mickey")

print(dog.name, dog.alive)
dog.eat()
dog.sleep()
