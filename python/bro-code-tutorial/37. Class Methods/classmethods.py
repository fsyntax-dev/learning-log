#class methods = Allow operations related to the class itself
#                Take (class) as the first paramter, which represents the class itself.

class Student:

    count = 0

    def __init__(self, name, gpa):
        self.name = name
        self.gpa = gpa
        Student.count += 1
    
    #Instance Methods

    def get_info(self):
        return f"{self.name} {self.gpa}"

    @classmethod
    def get_count(cls):
        return f"Total # of student: {cls.count}"
    
student1 = Student("John Doe", 3.33)

print(Student.get_count())