#include "push_swap.h"

void	first_part(t_stack *stacka, t_stack *stackb)
{
	int		small;

	small = find_smallest(stacka->cost, stacka->size);
	if (small > 1)
	{	
		while (small < stacka->size)
		{
			ft_rra(stacka);
			small++;
		}	
	}
	if (small <= 1 && small != 0)
	{
		while (small > 0)
		{
			ft_ra(stacka);
			small--;
		}
	}
	four_arg(stacka, stackb);
}

void	four_arg(t_stack *stacka, t_stack *stackb)
{
	if (!((stacka->cost[0] < stacka->cost[1]) && (stacka->cost[1] < stacka->cost[2]) && (stacka->cost[2] < stacka->cost[3])))
	{	
		ft_pb(stacka, stackb);
		three_arg(stacka);
		ft_pa(stacka, stackb);
	}
}