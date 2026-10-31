import random

option = ("Rock", "Paper", "Scissors")
playerpoint = 0
computerpoint = 0

while True:
    computer = random.choice(option)  # Computer's choice for this round
    player = None  # Reset player's choice for this round

    # Input validation loop
    while player not in option:
        player = input("Enter a choice (Rock, Paper, Scissors) or Q to quit: ").capitalize()
        if player == "Q":
            break
        elif player not in option:
            print("Invalid choice! Please choose Rock, Paper, or Scissors.")

    if player == "Q":
        print("Thanks for playing!")
        # Display final scores
        print(f"Final Score: Player {playerpoint} - Computer {computerpoint}\n")
        break

    print(f"Player chose {player}")
    print(f"Computer chose {computer}")

    # Game logic
    if player == computer:
        print("It's a tie!")

    elif (player == "Rock" and computer == "Scissors") or \
         (player == "Paper" and computer == "Rock") or \
         (player == "Scissors" and computer == "Paper"): #list of statement \ for new line
        print("You Win!")
        playerpoint += 1

    else:
        print("Imagine losing to a computer. LMAO!")
        computerpoint += 1
