#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
#include "main.h"

/**
 *  * print_sign - prints the sign of a number
 *   * @n: number that is going to be checked
 *    * Return: 1 if @n > zero, 0 if @n = zero and -1 if @n < zero
 *    **/

int print_sign(int n)
{
		int ret;

			if (n > 0)
					{
								_putchar('+');
										ret = 1;
											}
				else if (n == 0)
						{
									_putchar('0');
											ret = 0;
												}
					else if (n < 0)
							{
										_putchar('-');
												ret = -1;
													}
						return (ret);
}
