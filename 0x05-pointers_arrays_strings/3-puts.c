#include "main.h"
/**
* print_number - prints a string, followed by a new line, to stdout.
* @str: number tested
* Return: Always 0.
*/
void _puts(char *str)
{
char* ch;
int i;

ch = str;

for (i = 0; ch[i]; i++)
{
_putchar (ch[i]);
}
_putchar('\n');
}
