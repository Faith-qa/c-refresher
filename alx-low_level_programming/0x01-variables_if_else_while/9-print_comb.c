#include <stdio.h>
/**
 * main - print all possible comb of single digit
 * Return: 0 on success
 */
int main(void)
{
	int start;

	start = 0;
	while (start < 10)
	{
		putchar('0' + start);
		if (start != 9)
		{
			putchar(',');
			putchar(' ');
		}
		start++;
	}
	putchar('\n');
	return (0);

}
