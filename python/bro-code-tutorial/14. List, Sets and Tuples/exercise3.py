#item collection

item2pickup = []

#loop starts: input items
while True:
    item = input("What item to pickup (Q to Quit, T for Total): ")
    
    #exit loop 
    if item.capitalize() == "Q":
        print("Exiting Program...")
        break

    #items in in list    
    elif item.capitalize() == "T": 
        if not item2pickup:
            print("No item was added")

        else:
            for item in item2pickup:
                print(item)
            continue
    
    #collect elements store in list
    else:
        item2pickup.append(item.capitalize())
        print(f"{item.capitalize()} added!")


