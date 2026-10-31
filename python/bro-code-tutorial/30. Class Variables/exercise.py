import time

class Microwave:
    def __init__(self, brand, power_rating):
        self.brand = brand
        self.power_rating = power_rating
        self.turned_on = False

    # Methods
    def turn_on(self):
        if self.turned_on:
            print(f"{self.brand} microwave is already turned on.")
        else:
            self.turned_on = True
            print(f"{self.brand} microwave is now turned on.")

    def turn_off(self):
        if self.turned_on:
            self.turned_on = False
            print(f"{self.brand} microwave is now turned off.")
        else:
            print(f"{self.brand} microwave is already turned off.")

    def run(self, seconds: int):
        if self.turned_on:
            print(f"{self.brand} microwave is running for {seconds} seconds at {self.power_rating} power.")
            
            # Countdown Timer
            for i in range(seconds, 0, -1):
                print(f"Time left: {i} seconds", end="\r")
                time.sleep(1)
            
            print("\nTime's up! The microwave has finished.")
            self.turn_off()  # Auto turn off after running
        else:
            print(f"{self.brand} microwave is off. Please turn it on first.")

# Creating microwave instances
microwave1 = Microwave("Smeg", "800W")

# Testing
microwave1.turn_on()
microwave1.run(30)
