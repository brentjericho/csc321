# Brent Jericho Uyguangco
# CSC 321 Lab 12

import math

def rectangleArea(length, width):
    return length * width

def circleArea(radius):
    return (math.pi * (radius ** 2))

length = int(input("Please enter the length of the rectangle: "))
width = int(input("Please enter the width of the rectangle: "))

rectangle_area = rectangleArea(length, width)

print("The area of the rectangle is ", rectangle_area)

radius = int(input("Please enther the radius of the circle: "))

circle_area = circleArea(radius)

print("The area of the circle is: ", circle_area)
