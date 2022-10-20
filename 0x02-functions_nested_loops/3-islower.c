#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character
 * Return: 1 if the character is lowercase, 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
