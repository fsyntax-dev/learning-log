# | for multiple case 


def gradechecker(grade):
    match grade:
        case 100 | 90 | 80:
            return "A"
        case 70 | 60 | 50:
            return "B"
        case 40 | 30 | 20 | 10:
            return "Fail"
        case _:
            return "Input Not Allign"

yourgrade = int(input("Enter your grade: "))

print(gradechecker(yourgrade))
