carlist = [
    {"brand": "Ford", "model": "Focus", "year": 2018, "price": 59900},
    {"brand": "Ford", "model": "Mustang", "year": 2022, "price": 169900},     
    {"brand": "Honda", "model": "Civic", "year": 2024, "price": 167000},
    {"brand": "Porsche", "model": "GT3-RS", "year": 2024, "price": 13000000},       
           ]

def add_car():
    print("\nEnter the details of the new car:")
    brand = input("Brand: ")
    model = input("Model: ")
    year = int(input("Year: "))
    price = float(input("Price: "))

    # Create a new car dictionary
    new_car = {"brand": brand, "model": model, "year": year, "price": price}
    
    # Add the new car to the list
    carlist.append(new_car)
    print(f"\n{brand} {model} ({year}) added successfully!")

# Main program loop
while True:
    print("Options:")
    print("1. Add a new car")
    print("2. View car list")
    print("3. Exit")
    
    choice = input("Enter your choice (1/2/3): ")
    
    if choice == "1":
        add_car()
    elif choice == "2":
        print("\nCurrent car list:")
        for car in carlist:
            print(car)
    elif choice == "3":
        print("Exiting the program. Goodbye!")
        break
    else:
        print("Invalid choice. Please try again.")