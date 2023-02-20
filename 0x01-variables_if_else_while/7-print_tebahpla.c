#include <stdio.h>

/**
 * main - print the alphabet in revers
 * Return: Always 0
 */
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
	putchar(m);
	putchar('\n');
	return (0);
}
