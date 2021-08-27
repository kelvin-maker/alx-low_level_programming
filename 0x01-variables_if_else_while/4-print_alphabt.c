#include <stdio.h>

/**
 *main - Entry point
 *
 *
 *Prints alphabet in lower and upper case using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char ch_lower_case;

  char new_line;

  new_line = '\n';

  for (ch_lower_case = 'a'; ch_lower_case <= 'z'; ch_lower_case++)
    if (ch_lower_case != 'e' &&ch_lower_case != 'q')
      {
	putchar(ch_lower_case);
      }
  putchar(new_line);
}

