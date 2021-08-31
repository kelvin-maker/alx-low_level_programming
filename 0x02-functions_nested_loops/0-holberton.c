#include "holberton.h"
/**
 * main - prints holberton with __putchar()
 *
 * Return: 0.
 */
int main(void)
{
char str[] = "Holberton";
int i = 0;

while (i < 9)
    {
__putchar(str[i]);
i++;
    }
__putchar('\n');
return (0);
}
