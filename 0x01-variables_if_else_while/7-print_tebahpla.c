#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 * Return: This is always virtually 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');
	return (0);
}
