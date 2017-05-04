#include "brainfuck.h"

/*
 * s: the brainfuck program string
 * i: index of s being checked
 * b: value of the current byte
*/

int save;

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
	else if (s[i] == '[')
		return (b_func(s, b_open(s, i, b), b));
	else if (s[i] == ']')
		return (b_func(s, b_close(s, i, b), b));
	return (b_func(s, ++i, b));
}

int		b_open(char *s, int i, int *b)
{
	if (*b != 0)
		save = i;
	else
	{
		while (s[i] != ']')
			i++;
	}
	return (++i);
}

int		b_close(char *s, int i, int *b)
{
	if (*b != 0)
		return (save);
	return (++i);
}