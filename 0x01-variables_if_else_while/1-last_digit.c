#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigning random numbers to variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        printf("Last digit of %d is", n);
	int lastDigit = n % 10;
if (lastDigit > 5)
        {
        printf(" and is greater than 5\n", lastDigit);
        }
        else if (lastDigit == 0)
        {
        printf(" and is 0\n", lastDigit);
        }
        else
        {
        printf(" and is less than 6 and not 0\n", lastDigit);
        }
        return (0);
}
