#dictionary = a collection of {key:value} pairs
#           = ordered and changeable. No duplicates
# {ID : Name} {Items : Price} {Country : Capital}

capital = {"USA": "Washington D.C.",
           "Malaysia": "Kuala Lumpur",
           "Russia" : "Moscow",
           "China" : "Beijing"}

capital.update({"Germany" : "Berlin"})
capital.pop("China") #remove key

#capital.keys() only keys
#capital.values() only value

#print(capital.get("USA"))
#print(capital.pop())

print(capital.items)



