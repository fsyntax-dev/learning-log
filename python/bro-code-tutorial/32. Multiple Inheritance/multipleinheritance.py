#multiple inheritance = inherit from more than one parent class
#                       Child(Parent A, Parent B)
#Multilevel Inheritance = Inherit from a parent which inherits from another parent
#                         C(B) <- B(A) <- A


#Parent 
class Animal:
    def __init__(self, name):
        self.name = name

    def eat(self):
        print(f"{self.name} is eating")

    def sleep(self):
        print(f"{self.name} is sleeping")

#Another Parent
class Prey(Animal):
    def flee(self):
        print(f"{self.name} is fleeing")
        
class Predator(Animal):
    def hunt(self):
        print(f"{self.name} is hunting")

#Child
class Rabbit(Prey):
    pass

class Hawk(Predator):
    pass

class Fish(Prey, Predator):
    pass

rabbit = Rabbit("Bugger")
hawk = Hawk("Tony")
fish = Fish("Shark")

fish.hunt() 
fish.eat()