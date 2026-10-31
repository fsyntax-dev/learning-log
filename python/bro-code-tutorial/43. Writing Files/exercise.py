
student_names = ["John", "Doe", "Leo", "Sam", "Alex"]

file_dir = r"43. Writing Files\\student list.txt"

try:
    with open(file_dir, "w") as file:
        for student in student_names:
            file.write(student + "\n")
        print(f"File was successfully created.")   

except FileExistsError:
    print("That file already exists!")