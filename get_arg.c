#include "push_swap.h"

void	be_formed(char **av, t_stack *stack)
{
	char	**str;
	int		k;
	int		j;
	int		i;
	k = 1;
	j = 0;
	i = 0;
	while (av[k])
	{
		str = ft_split(av[k], ' ');
		while (str[j])
		{
			stack->cost[i] = ft_atoi(str[j]);
			j++;
			i++;
		}
		j = 0;
		k++;
	}
}
