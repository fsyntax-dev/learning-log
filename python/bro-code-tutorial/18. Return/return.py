# return = statement used to end a function
#          and send a result back to the caller
#          return an output to a function


def create_name(first, last):
    first = first.capitalize()
    last = last.capitalize()
    return first + " " + last

fullname = create_name("John", "Doe")

print(fullname)