# tempreature converter

unit = str(input("Celsius or Fahrenheit (C or F): "))
temp = float (input("Enter the temperature: "))

if unit == "C":
    temp = round((9 * temp) / 5 + 32, 1)
    print(f"The temprature in Fahrenheit is {temp}")
elif unit == "F":
    temp = round((temp - 32) * 5 / 9 ,1)
    print(f"The temprature in Celcius is {temp}")
else:
    print(f"{unit} is invalid measurement unit!")