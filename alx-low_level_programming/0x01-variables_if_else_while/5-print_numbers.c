#include<stdio.h>
/**
 * main - print values 1 to 1o
 * Return: 0 on success
 */
int main(void)
{
	int start;

	start = 0;

	while (start < 10)
	{
		printf("%d", start);
		start++;
	}
	putchar('\n');
	return (0);
}
