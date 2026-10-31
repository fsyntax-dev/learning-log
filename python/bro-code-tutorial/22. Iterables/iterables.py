# Iterables = An object/collection that can return its elements one at a time
#             allowing it to be iterated over in a loop


cardict = { "Honda"     : "Civic"   ,
            "Toyota"    : "Corolla" ,
            "Ford"      : "Mustang" ,
            "Chevrolet" : "Camaro"  ,
            "BMW"       : "X5"      ,
            "Audi"      : "A4"      ,
            "Tesla"     : "Model S" ,
            "Nissan"    : "Altima"  ,
            "Hyundai"   : "Elantra" ,
            "Kia"       : "Sorento" ,
            "Volkswagen": "Golf"    ,
            "Subaru"    : "Outback" ,
            "Mazda"     : "CX-5"    ,
            "Lexus"     : "RX"      ,
            "Porsche"   : "911"     ,
            "Jaguar"    : "F-Type"  ,
            "Volvo"     : "XC90"    ,
            "Ferrari"   : "488 GTB" ,}

for key, value in cardict.items(): #method =.keys() .values() .items() for both
    print(f"The {value} is a brand of {key}")
