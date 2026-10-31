
listone = ["Lesson", 5, 5.5, True] #Heterogeneous, can hold any types
print(listone)
listone.remove(5)
print(listone)

print("\n")

listtwo = ["Lorem Ipsum"]
print(listtwo)

print("\n")

emptylist = []
print(emptylist)

emptylist.append("I'm no longer empty!")
print(emptylist)
print("\n")

combinelist = listtwo + emptylist
print(combinelist)
print("\n")

#Index

nestlist = [[1,2,3],[4,5,6],[7,8,9]]
print(nestlist[0][1])
print("\n")

#Slice

number = [1,2,3,4,5,6,7,8,9,10]
print(number[0:6:2])