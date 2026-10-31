#parent class
class Guitar:
    def __init__(self, strings, color):
        self.strings    = strings
        self.color      = color
        

#child class
      #child        (#parent)
class ElectricGuitar(Guitar):
    #inherit attribute in guitar and another unique attribute
    def distortion(self):
        self.distortion = True

acoustic = Guitar(6, "Brown")
electric = ElectricGuitar(6, "Blue")


print(acoustic.strings)
print(acoustic.color)

print(electric.strings)
print(electric.color)