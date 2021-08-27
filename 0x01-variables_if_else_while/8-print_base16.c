#include <stdio.h>
/**
* main - Entry point
*
*prints all base 16 numbers
*
*Return: Always 0 (Success)
* 
*/

int main(void)
{
char alph;
int num;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');

for (alph = 'a'; alph <= 'f'; alph++)
putchar(alph);
putchar('\n');
return (0);
}
