/**
* main - prints the alphabet, in lowercase, followed by a new line
*
* Return: Always 0.
*/
int print_alphabet(void)
{
 char ch = 'a';
 for(int ch = 'a'; ch<='z';++ch)
 _putchar(ch);
 _putchar('\n');
}
int main(void)
{
  print_alphabet();
  return (0);
}
