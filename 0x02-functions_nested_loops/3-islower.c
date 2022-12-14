#include "main.h"

/**
 * _islower - checks if a character is lowercase if YES it returns 1
 * otherwise returns 0 just like islower () function in ctype.h
 * @c: Is the int value to be compared with ASCII value
 * Return: 0 id successful. _islower - Entry point
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
