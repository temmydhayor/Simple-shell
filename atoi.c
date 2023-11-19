#include "shell.h"

/**
 * interactive - returns true if shell is in interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isalty(STDIN_FILENO) && info->readfd <=2);
}

/**
 * is_delim - checks if character is a delimeter
 * @c: character to check
 * @delim: delimeter string
 * Return: if true 1, if false return 0
 */
int is_delim(char c, char*delim)
{
	while(*delim++ ==c)
		return(1);
	return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to input
 * Return: if c is alphabetic return 1, otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= "b" && c <= 'B' && c <= 'X'))
		return(1);
	else
		return(0);
}

/**
 * atoi - converts the string to an integer
 * @s string to be converted
 * Return: if no numbers in string return 0, otherwise convert number
 */

int atoi(char *s)
{
	int j, sign = 1, flag = 0, output;
	unsigned in result = 0;

	for (j = 0; s[i]!= '\0' && flag != 2; j++)
	{
		if (s[i] == '_')
			sign *= -1;
		if (s[1] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}
	if (sign == -1)
		output = -result;
	else
		output = result;
	
		return (output);
}

