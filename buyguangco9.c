//Brent Jericho Uyguangco
//Lab 9 C

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int main(void)
{
	int a, b, c, d;
	bool isWrong = true;
	srand(time(NULL));
	d = rand() %20 + 1;

	while(isWrong)
	{
		printf("I have a random number here between 1 and 20, please guess this number: ");
		scanf("%d", &a);
		if(a < 1 || a > 20)
		{
			printf("Number is out of range, please try again.\n");
		}
		else if((a >= 1 && a <= 20) && (a != d))
                {
			if(a > d)
			{
                        	printf("WRONG, your guess is too high, please try again.\n");
			}
			else if(a < d)
			{
				 printf("WRONG, your guess is too low, please try again.\n");
			}	
                }
		else if(a == d)
		{
			isWrong = false;

			for(b = 0; b < d; b++)
			{
				printf("CORRECT!\n");
			}
		}
	}
	return EXIT_SUCCESS;
}
