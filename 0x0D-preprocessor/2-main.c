#include <stdio.h>
/**
 * main - program compilation starts from the main
 * Descrition: this program prints the name of the file it was compipiled from
 * Return: 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}