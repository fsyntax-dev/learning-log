#format specifiers = {value:flag} format a value based on what flag inserted

# .(number)f = round to that many decimal places (floating point)
# :(number) = allocate that many spaces
# :03       = allocate and zero pad that many spaces
# :<        = left justify
# :>        = right justify
# :^        = center align
# :+        = use a plus sign to indicate positive value
# :=        = place sign to leftmost position
# :         = insert a space before positive numbers
# :,        = comma separator

p1 = 1.618
p2 = -2.618
p3 = 4236

#flag means format

print(f"1st Price is {p1:.2f}") # . means decimal point 
                                # 2 means for 2 digit 
                                # #f means floating number
print(f"2nd Price is {p2:}")
print(f"3rd Price is {p3:+,.2f}")