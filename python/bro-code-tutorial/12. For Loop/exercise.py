#countdown timer

import time

my_time = int(input("Enter time in second: "))

for x in reversed(range(0, my_time)):
    seconds = x % 60
    minutes = int(x / 60) % 60
    hours = int(x / 3600)
    print(f"{hours:02}:{minutes:02}:{seconds:02}")
    time.sleep(1) #to sleep in give amount of time, then code will execute (1) means 1 sec

print("Time's Up!")