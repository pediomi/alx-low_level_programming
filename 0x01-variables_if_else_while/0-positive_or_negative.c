#include <stdio.h>
/**
 * main - Print possible combination 0 - 9
 *
 * Return: Always zero (sucess)
 */
int main(void)
{
	int i;

	for (i = '0'; l <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
