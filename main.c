#include "brainfuck.h"

int		main(int c, char **args)
{
	if (c == 2)
		args[0] = "string";
	brainfuck("+[->,----------]<[+++++++++++.<]\0");
	return (0);
}
