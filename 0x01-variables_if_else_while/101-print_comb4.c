#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, m, l;

    for (n = 48; n < 58; n++)  /* loop through all possible values of the first digit */
    {
        for (m = 49; m < 58; m++)  /* loop through all possible values of the second digit */
        {
            for (l = 50; l < 58; l++)  /* loop through all possible values of the third digit */
            {
                if (l > m && m > n)  /* if third digit is greater than second and second is greater than first */
                {
                    putchar(n);  /* print the first digit */
                    putchar(m);  /* print the second digit */
                    putchar(l);  /* print the third digit */
                    if (n != 55 || m != 56)  /* if not the last combination, print a comma and space */
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    putchar('\n');  /* print a newline character */
    return (0);

}
