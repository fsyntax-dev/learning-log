#collection = single "variable" store multiple value
#   List    = [] ordered and changeable.    Duplicates OK
#   Set     = {} unordered and immutable.   Add/Remove OK No Duplicates
#   Tuple   = () ordered and unchangeable.  Duplicates OK


#list []
fruits = ["apple", "orange", "banana", "coconut"]


#reassign index

#fruits[0] = "durian" #variable [index] = element
#for fruit in fruits:
#    print(fruit)


fruits.append("durian") #add element in list

fruits.remove("apple") #remove element is list

fruits.insert(0, "pomegranate") #insert index and element

fruits.sort()#sort in aplhabetical order

fruits.reverse() #reverse based on list


print(fruits)




