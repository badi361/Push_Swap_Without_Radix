#include "push_swap.h"

void	samearg(t_stack *stack)
{
	int		i;
	int		j;

	i = 0;
	while (i < stack->size)
	{
		j = i + 1;
		while ((stack->cost[i] != stack->cost[j]) && j < stack->size)
			j++;
		if ((stack->cost[i] == stack->cost[j]) && j < stack->size)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}
void	is_it_int(char c)
{
	if (!(c >= '0' && c <= '9') && c != '-' && c != '+')
	{
		write (2, "Error\n", 6);
		exit(0);
	}
		//perror("a");
}

void	symbolcheck(char **av, t_stack *stack)
{
	int		i;
	int		k;
	char 	**str;

	i = 0;
	k = 0;
	str = split_and_add(av, stack);
	
	while (k < stack->size)
	{
		while  (str[k][i])
		{
			if ((str[k][0] == '-' || str[k][0] == '+') && str[k][1] == 0)
			{
				//printf("%d", k);
				write (2, "Error\n", 6);
				exit(0);
			}
			is_it_int(str[k][i]);
			next_index_check(str[k]);
		i++;
		}
	i = 0;
	k++;
	}
}

char	**split_and_add(char **av, t_stack *stack)
{
	char	**str;
	char	**s;
	int		k;
	int		j;
	int		i;
	k = 1;
	j = 0;
	i = 0;
	s = malloc(sizeof(char *) * stack->size);
	while (av[k])
	{
		str = ft_split(av[k], ' ');
		while (str[j])
		{
			s[i] = str[j];
			j++;
			i++;
		}
		j = 0;
		k++;
	}
	return (s);
}
void	max_min_check(t_stack *stack)
{
	int		i;

	i = 0;
	while (i < stack->size)
	{
		if (stack->cost[i] > 2147483647 || stack->cost[i] < -2147483648)
		{
			write (2, "Error\n", 6);
			exit(0);
		}	
		i++;
	}
}

void	next_index_check(char *s)
{
	int		i;

	i = 1;
	while (s[i])
	{
		if (!(s[i] >= '0' || s[i] == '9'))
		{
			write (2, "Error\n", 6);
			exit(0);
		}
	i++;
	}
	//perror("a");
}
/*int main(int ac, char **av)
{
	t_stack *stacka;
	t_stack	*stackb;
	int i;


	stacka = malloc(sizeof(t_stack));
	stacka->cost = malloc(sizeof(int) * ac - 1);
	stackb = malloc(sizeof(t_stack));
	stackb->cost = malloc(sizeof(int) * ac - 1);
	stackb->size = 0;
	stacka->size = ac -1;
	*av = malloc(sizeof(int) * ac - 1);
	 
	i =1;
	int k;
	k  =0;
	while (av[i])
	{
		atoi(av[i]);
		i++;
	}
	i = 0;
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	symbolcheck(av);
	while (i < ac - 1)
	{
		printf("%d\t", *(av[i]));
		i++;
	}
}*/