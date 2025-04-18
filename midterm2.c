//Brent Jericho Uyguangco
//Midterm 2 C Program


#include <stdio.h>
#include <stdlib.h>

void printName(int count);

int main(void){
	int count;
	printf("Please enter an integer, this integer will be how many times I will be printing my name: \n");
	scanf("%d", &count);
	printName(count);
	return EXIT_SUCCESS;
}

void printName(int count){
	int i = 0;
	int j = count;
	for(i; i < j; i++){
		printf("Brent \n");
	}

}
