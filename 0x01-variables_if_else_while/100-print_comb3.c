#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 *
 *
 * Return: 0
 */

int main(void)
{
        int a = '0';
	int b = '0';

        while (a <= '9')
        {
                while (b <= '9')
                {
                        if (a < b)
                        {
                                putchar(a);
                                putchar(b);

				if ((b != '9' || a !='8'))
				{
					putchar(',');
					putchar(' ');
				}
                        }
                        b++;
                }
                a++;
		b = '0';
        }
	putchar('\n');
        return(0);
}
