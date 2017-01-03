#include "brainfuck.h"

int		*ft_brzero(void)
{
	int		i;
	int		*b;

	i = 0;
	b = (int *)malloc(sizeof(int) * 2048);
	if (b)
	{
		printf("malloc worked\n");
		while(i < 2048)
			b[i++] = 0;
		printf("b is initialized\n");
		return (b);
	}
	return (NULL);
}
