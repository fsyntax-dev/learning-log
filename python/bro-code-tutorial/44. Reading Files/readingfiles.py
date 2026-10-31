

file_path = r"43. Writing Files//student list.txt"

try:
    with open(file_path, "r") as file:
        content = file.read()
        print(content)

except FileNotFoundError:
    print("File was not found!")
    
except PermissionError:
    print("You do not have permission to read that file.")