//Brent Jericho Uyguangco
//CSC-321
//Lab #6
//x+y*x/y-x
//-x-y/x*y+x
//x+y-x/y

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
        int x = 1, y = 2;

        printf("x+y*x/y-x = %d \n", (x+y*x/y-x));
        printf("-x-y/x*y+x = %d \n", (-x-y/x*y+x));
	printf("x+y-x/y = %d \n", (x+y-x/y));

        return EXIT_SUCCESS;
}
