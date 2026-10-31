#match-case statement   =   alternate methods for ELIF statement
#                           execute code if value matches CASE

def speed(kmh):     # value in argument
    match kmh:      # match means examining value in argument
        case 50:
            return "Slow"
        case 100:
            return "Normal"
        case 150:
            return "Normal"
        case _:     # underscore means no matching cases same as else
            return "Not Valid"

print(speed(50))