

class Employee:

    #Object
    def __init__(self,name, position):
        self.name = name
        self.position = position

    #Instance Methods #belong to object     
    def get_info(self):
        return f"{self.name} = {self.position}"
    
    @staticmethod #belong to class    
    def is_valid_position(position):
        valid_position = ["Manager","Chef" ,"Cashier", "Janitor"]
        return position in valid_position
    
print(Employee.is_valid_position("Chef"))