#compound interest calculator 

principle   = 0
int_rate    = 0
time        = 0

while principle <= 0:
    principle = float(input("Enter principle amount: "))

    if principle <= 0:
        print("Principle can't be less than or equal to zero")

while int_rate <= 0:
    int_rate = float(input("Enter interest rate amount: "))

    if int_rate <= 0:
        print("Interest rate can't be less than or equal to zero")

while time<= 0:
    time = int(input("Enter time to maturity: "))

    if time <= 0:
        print("Time can't be less than or equal to zero")


total = principle * pow((1 + int_rate / 100),time)

print(f"Balance after {time} years: $ {total:.2f} ")



