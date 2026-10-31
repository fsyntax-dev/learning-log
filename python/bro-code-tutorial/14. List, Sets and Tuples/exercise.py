fruits = ["apple", "orange", "banana", "coconut"]


try:
    pick_fruit = int(input("Enter each fruit by index: "))
    print(fruits[pick_fruit])   #varibale [index] to access single list
                                #[start : end: step] +1 forward -1 backward

except IndexError:
    print("Not Available")