#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ", n);
	num = n % 10;
	if (num > 5)
	{
		printf("last digit of %d is %d and is than 5\n", num);
	}
	else if ((num < 6) && (num < 0))
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", num);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", num);
	}
	return (0);
}
