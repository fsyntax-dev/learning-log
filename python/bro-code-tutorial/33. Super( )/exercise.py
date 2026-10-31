#Books Collection System

class Collection:
    def __init__(self, name, genre, pages):
        self.name   = name
        self.genre  = genre
        self.pages  = pages 

class Book(Collection):
    def __init__(self, name, genre, pages, author, year):
        super().__init__(name, genre, pages)
        self.author = author
        self.year = year

    def display_info(self):
        return f"'{self.name}' by {self.author} ({self.year}) - {self.pages} pages - Genre: {self.genre}"

