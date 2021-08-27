#include <stdio.h>
/**
 *main - Entry point
 *
 *Prints lowercase alphabets with putchar
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
char ch;
char new_line;
new_line = '\n';

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar(new_line);
return (0);
}
