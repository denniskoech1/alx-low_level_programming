#include <stdio.h>

/**
 * main - prints alphabet in lower then upper
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);
	
	putchar('\n');
	
	return (0);
}	
