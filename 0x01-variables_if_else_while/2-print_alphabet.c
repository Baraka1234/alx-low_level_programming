#include <stdio.h>
/**
 * main - prints alphabets in lower case
 *
 * Description: main function prints lowercase alphabets
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
        return (0);
}	
