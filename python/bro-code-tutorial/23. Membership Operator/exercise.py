students = {"John", "Doe", "Alex"}

student = input("Enter name of student: ")

if student in students:
    print(f"{student} is a student")
else:
    print(f"{student} is not available in database")