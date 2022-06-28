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
	const char *a[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jake", "Queen", "King"};

	printf("%s", a[rand()%13]);
}

void suits()
{
	const char *a[4] = {"Spades","Diamonds","Hearts","Clubs"};

	printf("%s", a[rand()%4]);
}
