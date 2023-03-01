#include "push_swap.h"

void	five_and_small(t_stack *stacka, t_stack *stackb)
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
	if (small < 2)
	{
		while (small > 0)
		{
			ft_ra (stacka);
			small--;
		}
	}
	five_arg(stacka, stackb);
}

void	five_arg(t_stack *stacka, t_stack *stackb)
{
	if (!((stacka->cost[0] < stacka->cost[1]) && (stacka->cost[1] < stacka->cost[2]) && (stacka->cost[2] < stacka->cost[3]) && (stacka->cost[3] < stacka->cost[4])))
		{
			ft_pb(stacka, stackb);
			first_part(stacka, stackb);
			ft_pa(stacka, stackb);
		}
			/*printf("%d\n", stacka->cost[0]);
			printf("%d\n", stacka->cost[1]);
			printf("%d\n", stacka->cost[2]);
			printf("%d\n", stacka->cost[3]);
			printf("%d", stacka->cost[4]);*/
}