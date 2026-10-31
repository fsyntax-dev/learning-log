#multithreading =   used to perform multiple tasks concurrentl (multitasking)
#                   Good for I/O bound tasks like reading files or fetching data from APIs
#                   threading.Thread(target=my_function)

import threading
import time

def walk_dog():
    time.sleep(6)
    print("You finish walking the dog")
    
def take_out_trash():
    time.sleep(2)
    print("You take out the trash")
    
def get_mail():
    time.sleep(4)
    print("You get the mail")

chore1= threading.Thread(target=walk_dog)
chore2= threading.Thread(target=take_out_trash)
chore3= threading.Thread(target=get_mail)

chore1.start()
chore2.start()
chore3.start()

#Join will wait it to finish before execute another code
chore1.join()
chore2.join()
chore3.join()

print("All chore are done.")

#thread will start at the same time 2 - 4 - 6 until finish (only 6 sec)
#if execute directly it will execute one by one (took 12 sec)