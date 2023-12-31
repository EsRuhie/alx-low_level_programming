#include <stdio.h>

/**
 * main - Prints the largest prime factor of 612852475143
 * Return: Always 0
 */

int main(void)
{
unsigned long int i, n = 612852475143;

while (n % 2 == 0)
{
n = n / 2;
}

for (i = 3; i * i <= n; i = i + 2)
{
while (n % i == 0)
{
n = n / i;
}
}

printf("%lu\n", n);
return (0);
}
