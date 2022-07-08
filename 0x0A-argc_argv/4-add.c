#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the sum of arguements
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */


int main(int argc, char *argv[]  __attribute__((unused)))
{
int i = 0; 
int sum = 0;
int j = 0;
if (argc == 1)
{
printf("%s \n", "0");

}
for(j=1;j<argc;j++)
{
if (!isdigit(*argv[j]))
{
printf("%s \n", "error");
exit(0);
}
}
while(i < argc)
{
int arguement = atoi(argv[i]);
sum = sum + arguement;
if (isdigit(*argv[i]) && i == argc - 1)
{
printf("%d \n", sum);
}
i++;
}
return (0);
}
