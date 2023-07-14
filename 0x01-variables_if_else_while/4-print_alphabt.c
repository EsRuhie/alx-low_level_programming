#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, excluding 'q' and 'e'
 *              using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		if (lowerCase != 'e' && lowerCase != 'q')
		{
			putchar(lowerCase);
		}

		lowerCase++;
	}

	putchar('\n');

	return (0);
}
