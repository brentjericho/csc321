//Brent Jericho Uyguangco
//CSC-321
//Lab #5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int num = 1;
	char let = 'b';
	float dec = 6.9;
	double dou = 6.987654;

	printf("integer num is %d, it's at address %p \n", num, &num);
	printf("character let is %c, it's at address %p \n", let, &let);
	printf("float dec is %.1f, it's at address %p \n", dec, &dec);
	printf("double dou is %lf, it's at address %p \n", dou, &dou);

	if(num == 1)
	{
		int digit = 2;
	}

	//printf("Digit is %d", digit);

	int array[10] = {0,9,8,7,6,5,4,3,2,1};

	int count = 0;

	for(count = 0; count < 10; count ++)
	{
		printf("the element at array[%d] is %d, it's at address %p \n", count, array[count], &array[count]);	

	}

	return EXIT_SUCCESS;
}
