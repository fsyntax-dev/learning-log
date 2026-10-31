
data = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]

for x in data:
    if x == 7: #find value in dataset
        print(f"{x} is found!")
        #break #to stop after found
        continue #to continue after found

    print(x)