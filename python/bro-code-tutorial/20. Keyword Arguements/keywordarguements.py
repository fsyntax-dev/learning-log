# keyword argument = an argument preceded by an indetifier
#                    help with readibility
#                    order of arguement doesnt't matter

def hello(greeting, title, first, last):
    print(f"{greeting} {title} {first} {last}")

# hello("Hello","Mr.","John","Doe") normal position

hello("Hello",last="Doe", first= "John", title="Mr.") #arguement names = string

      