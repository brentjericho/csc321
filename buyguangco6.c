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

	double a = 1.694, b = 2.694;

        printf("x+y*x/y-x = %lf \n", (a+b*a/b-a));
        printf("-x-y/x*y+x = %lf \n", (-a-b/a*b+a));
        printf("x+y-x/y = %lf \n", (a+b-a/b));

        return EXIT_SUCCESS;
}
