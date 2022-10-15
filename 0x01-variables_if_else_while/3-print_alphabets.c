#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabet in lowercase,
 * 	and then in uppercase, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	char big;
	char small = tolower(big);
	for (big = 'A'; big <= 'Z'; big++)
		putchar(small);
	for (big = 'A'; big <= 'Z'; big++)
		putchar(big);
	
	putchar('\n');
	return (0);
}
