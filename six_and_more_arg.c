#include "push_swap.h"

void	six_and_more_small(t_stack *stacka, t_stack *stackb)
{
	int		small;

	is_it_sort(stacka);
	small = find_smallest(stacka->cost, stacka->size);
	if (small > stacka->size - small - 1)
	{
		while (small <= stacka->size - 1)
		{
			ft_rra(stacka);
			//perror("b");
            small++;
		}
		if (small == stacka->size - 1)
		{
			ft_pb(stacka, stackb);
			//perror("a");
		}
	}
	if (small <= stacka->size - small - 1)
	{
		while (small > 0)
		{
			ft_ra (stacka);
			small--;
		}
		if (small == 0)
			ft_pb(stacka, stackb);
    }
	while (stacka->size > 5)
		six_and_more_small(stacka,stackb);
	if (stacka->size == 5)
		five_and_small(stacka, stackb);
	while (stackb->size > 0)
		ft_pa(stacka, stackb);	
	exit(0);
}

void	is_it_sort(t_stack *stacka)
{
	int 	i;
	int		k;

	i = 0;
	k = 1;
	while (stacka->cost[i] < stacka->cost[k] && k < stacka->size)
	{
		if (k == stacka->size - 1)
			exit(0);
		i++;
		k++;
	}
}