
import csv

cars =  [
            ["Brand", "Car"],
            ["Porsche", "911 GT3 RS"],
            ["Mclaren", "P1"],
            ["Lamborghini", "Huracan"]
        ]

file_dir = r"43. Writing Files//car.csv"

try:
    with open(file_dir, "w", newline="") as file:
        writer = csv.writer(file)
        for row in cars:
            writer.writerow(row)
        print(f"csv file was created")
except FileExistsError:
    print("File already exist!")
