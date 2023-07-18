#include <stdio.h>
/**
 * main - print hexdecimal
 * Return: 0
 */
int main(void)
{
	int start;
	char stp;

	start = 0;
	stp = 'a';
	while (start < 10)
	{
		putchar('0' + start);
		start++;
	}
	while (stp <= 'f')
	{
		putchar(stp);
		stp++;
	}
	putchar('\n');
	return (0);
}
