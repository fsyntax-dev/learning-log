#Membership Operator = Used to test whether a value or variable is found in a sequence
#                    = (string, list, tuple, set, or, or dictionary)
#                       1. in 
#                       2. not in


word = "apple"
wordstuple = list(word)  
wordsguess = []  

while True:
    guess = input("Guess a letter in the secret word (or 'q' to quit): ")

    if guess == "q": 
        print("Thanks for playing! Goodbye!")
        break

    if guess in wordstuple:
        if guess not in wordsguess:  # Avoid adding duplicate guesses
            wordsguess.append(guess)  # Add the correct guess to the list
            
        print(f"There is a '{guess}' in the word.")
        print(f"Correct guesses so far: {wordsguess}")


    else:
        print(f"'{guess}' was not found in the word.")

    # Check if all letters have been guessed
    if set(wordsguess) == set(wordstuple):
        print("Congratulations! You've guessed all the letters!")
        break