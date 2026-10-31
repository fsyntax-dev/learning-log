
course = ["CMSA", "FMVA"]
new_course = ["Crptocurrency", "Technical Analysis", "Macroeconomic"]

course.append("CBCA")       #value
course.insert(1, "BIDA")    #index and value
course.extend(new_course)   #combine lists
course.remove("CMSA")       #remove value
course.pop()                #remove from last
course.pop(1)               #remove by index 

new_course.reverse()        #reverse list
new_course.sort()           #sort in alphabetical order
new_course.sort(reverse=True)

print(course)
print(new_course)