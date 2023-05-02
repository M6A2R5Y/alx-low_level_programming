#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 *
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	/* sign of the number */
	int sign = 1;
	/* final result */
	int result = 0;
	/* iterator to go through the string */
	int i = 0;
	/* Check for leading spaces */
	while (s[i] == ' ')
	{
		i++;
	}
	/* Check for leading sign */
	if (s[i] == '-' || s[i] == '+')
	{
		 if (s[i] == '-')
		 {
			 sign *= -1;
		 }
		 else
		 {
			 i++;
		 }
	}
	/* Convert the string to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	/* Apply the sign to the result */
	return sign * result;
}
