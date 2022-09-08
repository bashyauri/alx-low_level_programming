#include <stdio.h>
#include <string.h>
/**
 *main - Entry point
 *Description:'Output the size of dataTypes'
 *Return: Always 0 (Success)
 */
int main(void)
{
int integer_type;
double double_type;
float float_type;
char char_type;
printf("Size of int: %ld bytes\n", sizeof(integer_type));
printf("Size of float: %ld bytes\n", sizeof(float_type))
printf("Size of double: %ld bytes\n", sizeof(double_type));
printf("Size of char: %ld byte\n", sizeof(char_type));
return (0);
}
