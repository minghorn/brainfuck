#include "brainfuck.h"

int		main(int c, char **args)
{
	if (c == 2)
		brainfuck(args[1]);
	return (0);
}
