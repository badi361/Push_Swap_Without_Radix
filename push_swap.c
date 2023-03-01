#include "push_swap.h"

int		counter(char **av)
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
			j++;
			i++;
		}
		j = 0;
		k++;
	}
	return (i);
}
/*void	malloc_struct(int ac, char **av)
{
	t
}*/
int	main (int ac, char **av)
{
	t_stack		*stacka;
	t_stack		*stackb;

	stacka = malloc(sizeof(t_stack));
	stackb = malloc(sizeof(t_stack));
	stacka->size = counter(av);
	stacka->cost = malloc(sizeof(int) * stacka->size);
	stackb->size = 0;
	stackb->cost = malloc(sizeof(int) * stacka->size);
	be_formed(av, stacka);
	max_min_check(stacka);
	//	perror("a");
	symbolcheck(av, stacka);
	samearg(stacka);
	if (ac == 1)
		exit(0);
	else if (stacka->size == 1)
		exit(0);
	else if (stacka->size == 2)
		two_arg(stacka);	
	else if (stacka->size == 3)	
		three_arg(stacka);
	else if (stacka->size == 4)
		first_part(stacka, stackb);
	else if (stacka->size == 5)
		five_and_small(stacka, stackb);
	else if (stacka->size > 5)
	/*printf("%d\n", stacka->cost[0]);
	printf("%d\n", stacka->cost[1]);
	printf("%d\n", stacka->cost[2]);
	printf("%d\n", stacka->cost[3]);
	printf("%d\n", stacka->cost[4]);
	printf("%d\n", stacka->cost[5]);*/
		six_and_more_small(stacka,stackb);
}
