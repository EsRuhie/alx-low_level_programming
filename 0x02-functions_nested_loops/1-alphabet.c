#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: 0
 */

void print_alphabet(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;

while (alphabet[i] != '\0')
{
_putchar(alphabet[i]);
i++;
}
_putchar('\n');
}
