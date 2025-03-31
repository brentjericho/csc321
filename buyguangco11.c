//Brent Jericho Uyguangco
//Lab 11 C

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double hypotenuse(int base, int height);

int main(void) {
	
	int base, height;
	printf("Please enter the base and height of the triangle: ");
	scanf("%d %d", &base, &height);

	printf("The hypotenuse of the triangle is %.2f\n", hypotenuse(base, height));
        return EXIT_SUCCESS;
}

double hypotenuse(int base, int height) {
	return sqrt(pow(base, 2) + pow(height, 2));
}

