#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Serves as the entry point for the program
 *
 * This program will assign a random number
 *
 * to the variable n each time it is executed.
 *
 *Return: By default returns zero if no erros otherwise returns non-zero value.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
