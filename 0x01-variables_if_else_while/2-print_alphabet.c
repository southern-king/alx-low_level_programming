#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point, prints the alphabet
 * Return: This is 0
 */
int main(void);
{
	char alp[26] = "abcdefghijklmnopqrstuvwxxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
