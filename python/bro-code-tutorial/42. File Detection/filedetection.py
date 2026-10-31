import os

file_path = r"42. File Detection\test.txt"

if os.path.exists(file_path):
    print(f"The location '{file_path}' exists")
else:
    print(f"That location doesn't exist")
