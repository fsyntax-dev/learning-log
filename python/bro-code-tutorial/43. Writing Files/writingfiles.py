# python writing files (.txt, .json, .csv)

txt_data = "I like Porsche 911 GT3 RS"

file_path = r"43. Writing Files\\output.txt"
try:
    with open(file=file_path, mode="wa") as file: #w for write a file
        file.write(txt_data)
        print(f"txt file {file_path} was created")

except FileExistsError:
    print("File already exist!")

