#duck typing    = another way to achieve polymorphism besides Inheritance
#                 Object must have the minimum necessary attributes/methods
#                 If it looks like a duck and quacks like a duck it must be a duck

class Creature:
    alive = True

class Dog(Creature):
    def sound(self):
        print("Woof")

class Cat(Creature):
    def sound(self):
        print("Meow")

class Human(Creature):
    def talk(self):
        print("LMAO I'M HUMAN")

    def sound(self):
        print("I can imitates Woof & Meow") #human can imitates sound of other animal


creatures = [Dog(), Cat(), Human()]

for creature in creatures:
    creature.sound()

