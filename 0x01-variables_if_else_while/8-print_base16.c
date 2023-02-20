#include <stdio.h>

/**
 * main - prints the numbers in the base 16
 * Return: Always 0
 */
int main(void)
{
	int n;
	char l;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (l = 'a'; l <= 'f'; l++)
		put cachar(l);
	putchar('\n');
	return (0);
}
