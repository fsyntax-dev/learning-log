
#list
course = ["CMSA", "FMVA", "CBCA", "BIDA", "FPWMP", "FTIP"]


print(f"The total course is {len(course)}")     #length of list
print(f"The chosen course is {course[1]}")      #index access value in list
                                                # + from starts 
                                                # - from ends
print(f"The chosen course is {course[:2]}")

print("\n")

#list function()
anotherlist = list("Lorem Ipsum")

for i in anotherlist:
    print(i)
