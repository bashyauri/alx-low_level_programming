#include "main.h"
/**
* rev_string - reverses a string.
* @s: number tested
* Return: Always 0.
*/
void rev_string(char *s)
{
int i = 0;
while (*(s + i))
{
i++;
}
for(i--; i >= 0; i--)
{
printf("%c", *(s + i));
}
printf("\n");
}

