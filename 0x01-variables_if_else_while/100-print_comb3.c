#include <stdio.h>
/**
 * main - Entry pouint
 *
 * code for printing all possible combination of two d/t digits
 * in ascending order and separated by a coma followed by a space.
 *
 * Return: 0 Success
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
			continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
