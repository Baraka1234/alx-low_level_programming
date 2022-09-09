#include <stdio.h>
/**
 * main - prints numbers of base 16 in lowercase
 *
 * Description: prints
 *Return: 0
 */
int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a' ; c <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
