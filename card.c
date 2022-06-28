#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void values();
void suits();

int main()
{
	srand(clock());

	values();
	printf(" of ");
	suits();
	printf("\n");
}

void values()
{
	const char *a[13];
	a[0] = "Ace";
	a[1] = "2";
	a[2] = "3";
	a[3] = "4";
	a[4] = "5";
	a[5] = "6";
	a[6] = "7";
	a[7] = "8";
	a[8] = "9";
	a[9] = "10";
	a[10] = "Jake";
	a[11] = "Queen";
	a[12] = "King";

	printf("%s", a[rand()%13]);
}

void suits()
{
	const char *a[4];
	a[0] = "Spades";
	a[1] = "Diamonds";
	a[2] = "Hearts";
	a[3] = "Clubs";

	printf("%s", a[rand()%4]);
}
