#include "main.h"

/**
* more_numbers - entry point
*
* Description: Prints the numbers with _putchar
*
* Return: void
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
