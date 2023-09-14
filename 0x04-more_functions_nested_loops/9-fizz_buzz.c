#include "main.h"
/**
 *fizz_buzz - prints out buzz & fizz
 */

void fizz_buzz(void)
{
	int count;

	for (count = 0; count <= 100; count++)
	{

		if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", count);
		}
		printf('\n');
	}
}
