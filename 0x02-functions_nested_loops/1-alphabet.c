/**
* main - prints the alphabet, in lowercase, followed by a new line
*
* Return: Always 0.
*/
void print_alphabet()
{
 char ch = 'a';
 for(ch = 'a'; ch<='z';++ch)
 _putchar(ch);
 _putchar('\n');
}
int main(void)
{
  print_alphabet();
  return (0);
}
