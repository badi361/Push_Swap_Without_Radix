#include "push_swap.h"

void    two_arg(t_stack *stack)
{
    if (stack->cost[0] > stack->cost[1])
		ft_sa(stack);
}

void    three_arg(t_stack *stacka)
{
    if (stacka->cost[0] < stacka->cost[1] && stacka->cost[0] < stacka->cost[2])
    {
        if (stacka->cost[1] > stacka->cost[2])
        { 
			ft_rra(stacka);
			ft_sa(stacka);
		}
	}
	if (stacka->cost[1] < stacka->cost[0] && stacka->cost[1] < stacka->cost[2])
	{
		if (stacka->cost[0] > stacka->cost[2])
			ft_ra(stacka);
		else 
			ft_sa(stacka);
	}	
	if (stacka->cost[2] < stacka->cost[0] && stacka->cost[2] < stacka->cost[1])
	{
		if (stacka->cost[1] > stacka->cost[0])
			ft_rra(stacka);
		else
		{
			ft_sa(stacka);
			ft_rra(stacka);
		}
	}
}