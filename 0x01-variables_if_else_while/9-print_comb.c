#include<stdio.h>
/**
 *main - Start Process.
 *Return: 0 when succesfu.
 */

int main(void)
{
	int n = 0;
	int m = 0;

	while (n <= 9)
	{
		while (m <= 9)
		{
			if(!(n == 0 && m ==0))
			{
				if(n != 0 || m != 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(n + '0');
				putchar(m + '0');
			}
			m++;
		}
		n++;
	}
	return (0);
}
