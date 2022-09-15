#include "main.h"

/**
* more_numbers - checks for a digit (0 through 9)
* Return: (0)
*/
void more_numbers(void)
{
int times;
int numbers;
for (times = 0; times < 10; times++)
for (numbers = 0; numbers <= 14; numbers++)
_putchar(numbers + '0');
_putchar('\n');
}
