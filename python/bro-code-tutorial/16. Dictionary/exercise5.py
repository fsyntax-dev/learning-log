#number guessing game
import random

low_num = 1
high_num = 5
answer = random.randint(low_num, high_num)
guesses = 0
is_run = True

print("Python Number Guessing Game")
print(f"Select a number between {low_num} and {high_num}")


#Loop asking input
while is_run:

    guess = input("Enter your guess: ") 

    if guess.isdigit():
        guess = int(guess) #Convert str to int
        guesses += 1 #Add how much user guess

        if guess < low_num or guess > high_num:
            print("That number is out of range!")

        elif guess < answer:
            print("Too low! Try again!")

        elif guess > answer:
            print("Too high! Try again!")
        
        else:
            print(f"Correct! The answer was {answer}")
            print(f"Number of guesses: {guesses}")
            is_run = False
    else:
        print("Invalid Guess")
        print(f"Please select a number between {low_num} and {high_num}")