#include "brainfuck.h"

int save;

/*
 * s: the brainfuck program string
 * i: index of s being checked
 * b: value of the current byte
*/

int		b_func(char *s, int i, int *b)
{
	if (s[i] == '\0')
		return (1);
	if (s[i] == '>')
		++b;
	else if (s[i] == '<')
		--b;
	else if (s[i] == '+')
		++*b;
	else if (s[i] == '-')
		--*b;
	else if (s[i] == '.')
		write(1, b, 1);
	else if (s[i] == '[' || s[i] == ']')
		b_while(s, i, b);
	return (b_func(s, ++i, b));
}

int		b_while(char *s, int i, int *b)
{
	printf("inside while, b is: %d\n", *b);
	if (s[i] == '[')
	{
		if (*b != 0)
		{
			save = i;
			i++;
		}
		else
		{
			while (s[i] != ']')
				i++;
		}
		return (b_func(s, i, b));
	}
	else if (s[i] == ']')
	{
		if (*b != 0)
			return (b_func(s, save, b));
	}
	return (b_func(s, ++i, b));
}
