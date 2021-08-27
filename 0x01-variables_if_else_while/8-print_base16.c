#include <stdio.h>

/**
 *prints all base 16 numbers 
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
