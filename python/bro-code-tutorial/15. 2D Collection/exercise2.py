

questions = ("What does technical analysis study?",
            "What reduces trading risk?",
            "What weakens a currency?",
            "How to avoid overtrading?",)

options =(("A. Price data ", "B. Economic news ", "C. Company reports ", "D. Trading volume "),
          ("A. Diversification ", "B. Overtrading ", "C. Single trades ", "D. Ignoring news "),
          ("A. Inflation", "B. Exports ", "C. Low interest rates ", "D. High reserves "),
          ("A. Plan trades ", "B. Double trades ", "C. Skip news ", "D. Follow emotions "))

answers = ("A", "A", "A", "A")
guesses = []
score = 0
question_num = 0 

for question in questions:
    print("************************")
    print(question)
    for option in options[question_num]:
        print(option)

    guess = input("Enter (A,B,C,D): ").upper()
    guesses.append(guess)
    if guess == answers[question_num]:
        score += 1
        print("Correct!")
    else:
        print("Incorrect!")
        print(f"{answers[question_num]} is the correct answer")

    question_num += 1

print(f"Your score point is {score/len(questions)*100}%")