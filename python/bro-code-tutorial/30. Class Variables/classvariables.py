#class variables    = shared among all instances of a class
#                   = Defined outside the constructor
#                   = Allow you to share data among all objects created from that class

#class variable = outside constructor
#instance variable = inside constructor



class Student:

    #class variable
    class_year = 2025
    num_students = 0

    #constructor
    def __init__(self, name, age): 
        #instance variable
        self.name               = name
        self.age                = age
        Student.num_students    += 1


student1 = Student("John Doe", 24)
student2 = Student("Alex Carter", 25)

print(student1.name, student1.age, Student.class_year, Student.num_students)
