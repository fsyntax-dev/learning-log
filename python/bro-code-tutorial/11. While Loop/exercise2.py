#while loop to execute code multiple time until a condtion is false 

import time

num = int(input("Enter a number: "))

while num <= 10:
    print(num)
    num += 1
    time.sleep(3)

print("Done with loop")