#include <stdio.h>

/**
 * main - Entry point
 *
 *prints base 10 numbers without char
 *
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
int i;

i = 0;
while (i < 10)
{
putchar((i % 10) + '0');
i++;
}
putchar('\n');
return (0);
}
