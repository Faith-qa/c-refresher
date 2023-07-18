#include <stdio.h>
/**
 * main - print numbers to base 10 using only putchar
 * Return: 0 on success
 */
int main(void)
{
	int start;

	start = 0;
	while (start < 10)
	{
		putchar('0' + start);
		start++;
	}
	putchar('\n');
	return (0);
}
