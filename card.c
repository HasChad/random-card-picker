#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(clock());

	switch(rand()%12+1)
	{
		case 1:
		printf("Ace");
		break;

		case 2:
		printf("2");
		break;

		case 3:
		printf("3");
		break;

		case 4:
		printf("4");
		break;

		case 5:
		printf("5");
		break;

		case 6:
		printf("6");
		break;

		case 7:
		printf("7");
		break;

		case 8:
		printf("8");
		break;

		case 9:
		printf("9");
		break;

		case 10:
		printf("10");
		break;

		case 11:
		printf("Jack");
		break;

		case 12:
		printf("Queen");
		break;

		case 13:
		printf("King");
		break;
	}

	printf(" of ");

	switch(rand()%3)
	{
		case 0:
		printf("Spades");
		break;

		case 1:
		printf("Diamonds");
		break;

		case 2:
		printf("Hearts");
		break;

		case 3:
		printf("Clubs");
		break;
	};
}