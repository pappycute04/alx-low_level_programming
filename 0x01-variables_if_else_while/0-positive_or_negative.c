/**
 * main - Entry
 * Return: Always 0
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
	{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/** Yor codes goes there*/
	if (n > 0)
	}
	printf("%d is positive\n");
	}
	else if (n == 0)
	{
	printf("%d is zero\n");
	}
	else
	{
	printf("%d is negative\n");
	}
	return (0);
