# Brent Jericho Uyguangco
# CSC 321 Lab 8

import random

number = int(random.randint(0, 9))

print("Please guess a number from 0 to 9: ")

guess = int(input())

if guess > number:
    print("WRONG, your guess is too high, the answer is", number)
elif guess < number:
    print("WRONG, your guess is too low, the answer is", number)
else:
    print("CORRECT")

for x in range(0, 5):
    print("If you gaze long enough into the abyss, the abyss will gaze back into you.")

count = 0

while count < 5:
    print("In N Out Double-Double")
    count = count + 1
