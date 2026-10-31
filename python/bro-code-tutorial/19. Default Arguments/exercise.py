import time

def count(start = 1, end = 10):
    for x in range(start, end+1):
        print(x)
        time.sleep(1)
    print("Done")

count(0,10)
