import random
import string

# Define the characters to use for encryption
characters = string.punctuation + string.digits + string.ascii_letters
characters = list(characters)  # Convert to a list for easier manipulation
keys = characters.copy()  # Create a copy of the characters list

# Shuffle the keys to create a random mapping
random.shuffle(keys)

# Print the original characters and the shuffled keys for reference
print("Original characters:", characters)
print("Shuffled keys:", keys)

# Get input from the user
text = input("Enter text: ")
ciphertext = ""

# Encrypt the input text
for letter in text:
    if letter in characters:  # Check if the character is in the characters list
        index = characters.index(letter)
        ciphertext += keys[index]
    else:
        ciphertext += letter  # If the character is not in the list, leave it unchanged

# Print the results
print(f"Your original text: {text}")
print(f"Your encrypted text: {ciphertext}")