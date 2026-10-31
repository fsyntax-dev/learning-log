#1D Data Collector

car_list = []

while True:
    new_list = (input("Enter any cars you like (Q to Quit): "))
    if new_list.upper() == "Q":
        break
    car_list.append(new_list)
    
print(f"Your list: {', '.join(car_list)}")
