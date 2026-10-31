birth_flower = {
                "January"   : "Snowdrop",
                "February"  : "Violet",
                "March"     : "Daffodil",
                "April"     : "Daisy",
                "May"       : "Lily",
                "June"      : "Honeysuckle",
                "July"      : "Larkspur",
                "August"    : "Gladiolus",  
                "September" : "Aster",
                "October"   : "Marigold",
                "November"  : "Chrysanthemum",
                "December"  : "Narcissus",
                }

while True:
    ask_month = input("Enter your month: ").capitalize()  
    if ask_month in birth_flower:
        print(f"Your birth flower is the {birth_flower[ask_month]}.")
        break
    else:
        print("Enter a valid month!")