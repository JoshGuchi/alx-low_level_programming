#include <stdio.h>
/**
* main - This program prints all two digit combinations with ,
* space and a new line
* Return: returns 0
*/
int main(void)
{
	int digit_1, digit_2;

	for (digit_1 = 0; digit_1 <= 98; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 <= 99; digit_2++)
		{
			putchar((digit_1 / 10) + '0');
			putchar((digit_1 % 10) + '0');
			putchar(32);
			putchar((digit_2 / 10) + '0');
			putchar((digit_2 % 10) + '0');

			if (digit_1 / 10 != 9 || digit_1 % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
