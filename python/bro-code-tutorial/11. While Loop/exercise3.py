

secret = 4
print("Guess the secret number between 1 to 10")

while True:
    guess = int(input("Your Guess: "))
    if guess == secret:
        print(f"You are correct, the secret number is {secret}!")
        break
    else:
        print("Incorrect guess. Try Again!")
