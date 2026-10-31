#2dlist = [list1, list2, list3] 
#list of multiple list 

#1D List
fruits      = ["apple","orange","banana","coconut"]
vegetables  = ["celery", "carrots", "potatoes"]
meats       = ["chicken", "fish", "turkey",]


#2D List
groceries   = [fruits, vegetables, meats]

try:
    print(groceries[0][5])  #2dlist [which list]    [which element]
                            #       [entire rows]   [one element in a row] 

except IndexError:
    print("Not Available")
