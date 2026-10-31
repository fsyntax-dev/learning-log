import csv

file_path = r"43. Writing Files//car.csv"

try:
    with open(file_path, "r") as file:
        content = csv.reader(file)
        for line in content: #need to iterate
            print(line)

except FileNotFoundError:
    print("File was not found!")
    
except PermissionError:
    print("You do not have permission to read that file.")