# Brent Jericho Uyguangco
# CSC 321 Lab 12

import math

def rectangleArea(length, width):
    return length * width

def circleArea(radius):
    return (math.pi * (radius ** 2))

length = int(input("Please enter the length of the rectangle: "))
width = int(input("Please enter the width of the rectangle: "))

print("The area of the rectangle is ", rectangleArea(length, width))

radius = int(input("Please enther the radius of the circle: "))

print("The area of the circle is ", circleArea(radius))
