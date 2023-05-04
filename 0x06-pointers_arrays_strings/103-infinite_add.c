#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result or 0 if the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, len_res, carry, i, j;
	/* find lengths of n1 and n2 */
	for (len1 = 0; n1[len1]; len1++)
	{
		;
	}
	for (len2 = 0; n2[len2]; len2++)
	{
		;
	}
	/* calculate length of result */
	len_res = len1 > len2 ? len1 : len2;
	/* check if result can fit in buffer */
	if (len_res >= size_r - 1)
	{
		return (0);
	}
	/* add digits starting from least significant */
	for (carry = i = j = 0; i < len1 || j < len2; i++, j++, len_res--)
	{
		int digit1 = i < len1 ? n1[len1 - 1 - i] - '0' : 0;
		int digit2 = j < len2 ? n2[len2 - 1 - j] - '0' : 0;
		int sum = digit1 + digit2 + carry;
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
			r[len_res - 1] = sum + '0';
		}
	}
	/* add carry if necessary */
	if (carry)
	{
		if (len_res == 0)
		{
			return (0);
		}
		r[len_res - 1] = '1';
		len_res--;
	}
	/* terminate the result string */
	r[size_r - 1] = '\0';
	/* shift result to the start of buffer */
	if (len_res != 0)
	{
		for (i = 0; i < len_res; i++)
		{
			r[i] = r[i + size_r - len_res - 1];
		}
		r[i] = '\0';
	}
	return (r);
}
