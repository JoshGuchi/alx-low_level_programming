#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: This prints number combinations
 * Return: Always 0 (confirmed)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		putchar(i);

		if (i != '9')

		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
