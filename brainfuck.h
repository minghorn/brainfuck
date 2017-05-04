#ifndef BRAINFUCK_H
# define BRAINFUCK_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_item
{
	int				pos;
	struct s_item	*next;
}					t_item;

typedef struct		s_stack
{
	int				size;
	t_item			*head;
}					t_stack;

int		b_func(char *s, int i, int *b);
int		*ft_brzero(void);
int		b_open(char *s, int i, int *b);
int		b_close(char *s, int i, int *b);
void	brainfuck(char *s);

#endif