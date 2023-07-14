#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int lowerCase = 'a';

    while (lowerCase <= 'z')
    {
        putchar(lowerCase);
        lowerCase++;
    }

    putchar('\n');

    return (0);
}	
