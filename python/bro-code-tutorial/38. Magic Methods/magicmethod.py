#Magic Methods = Dunder Methods __init__, __str__, __eq__
#                Allow developers to define or customize the behaviour of objects

class Books:

    def __init__(self, title, author, pages, publisher):
        self.title      = title
        self.author     = author
        self.pages      = pages
        self.publisher  = publisher

    def __str__(self):
        return f"{self.title} by {self.author} was published by {self.publisher}"
    
    def __add__(self, other):
        return f"{self.pages + other.pages} pages"
        
#Book Information     
book1 = Books("Python for Finance", "Yves Hilpisch", 4550, "O'Reilly")
book2 = Books("Python for Algorithmic Trading Cookbook", "Jason Strimpelh", 1547, "Packt Publishing")
book3 = Books("Inside The Currency Market", "Brian Twomey", 527, "John Wiley & Sons")

print(book1)
print(book2)
print(book3) 

print(book1 + book2)

