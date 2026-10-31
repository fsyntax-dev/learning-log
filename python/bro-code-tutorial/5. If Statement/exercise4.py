#Future Spot Rate Calculator Based on Carry Trade

#Pair Selection
base_currency   = input("Enter base currency: ")
quote_currency  = input("Enter quote currency: ")

#Loop
if base_currency and quote_currency == "":
    print("Please enter a valid arguement")
    base_currency   = input("Enter base currency: ")
    quote_currency  = input("Enter quote currency: ")

else:
    print(f"The chosen exchange rate is {base_currency}/{quote_currency}")

#Spot Exchange Rate for Selected Pair
spot_ex_rate = float(input(f"Whats is the spot rate for {base_currency}/{quote_currency}: "))
 
if spot_ex_rate == 0 or "":
    print("Please enter a valid spot rate")
    spot_ex_rate = float(input(f"Whats is the spot rate for {base_currency}/{quote_currency}: "))

else:
    print(f"The current spot rate for {base_currency}/{quote_currency} is {spot_ex_rate:.5f}")

#Interest Rate for Each Selected Currency

int_base_currency   = float(input(f"What is the interest rate for {base_currency}: "))
int_quote_currency  = float(input(f"What is the interest rate for {quote_currency}: "))

#Loop

if int_base_currency and int_quote_currency == 0:
    print("Please enter a valid arguement")
    int_base_currency   = float(input(f"What is the interest rate for {base_currency}: "))
    int_quote_currency  = float(input(f"What is the interest rate for {quote_currency}: "))

else:
    print(f"The interest for selected currency is {int_base_currency} and {int_quote_currency} respectively")

#Calculating Future Spot Rate

future_ex = (((int_base_currency/100) + 1) / ((int_quote_currency/100) + 1)) * spot_ex_rate

print(f"The future forward rate is {future_ex:.6f}")