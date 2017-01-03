#include "brainfuck.h"

void	b_while(char *s, int i, int *b);

void	b_func(char *s, int i, int *b)
{
	if (s[i] == '>')
		b++;
	else if (s[i] == '<')
		b--;
	else if (s[i] == '+')
		*b = *b + 1;
	else if (s[i] == '-')
		*b = *b - 1;
	else if (s[i] == '.')
		write(1, b, 1);
	else if (s[i] == '[')
		b_while(s, i, b);
	if (s[++i] != '\0')
		b_func(s, i, b);
}

void	b_while(char *s, int i, int *b)
{
	int save;

	save = i;
	if (*b != 0)
	{
		while (s[i] != ']' && s[i++] != '\0')
			b_func(s, i, b);
		if (*b != 0)
		{
			i = save;
			b_while(s, i, b);
		}
	}
	else
	{
		while (s[i] != ']')
			i++;
	}
}
