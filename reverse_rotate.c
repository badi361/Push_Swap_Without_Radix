/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baran <baran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:49:50 by bguzel            #+#    #+#             */
/*   Updated: 2023/02/26 23:34:57 by baran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack *stack)
{
	int		tmp;
	int		i;
	int		k;
	int		m;

	k = 0;
	i = stack->size - 1;
	tmp = stack->cost[0];
	stack->cost[k++] = stack->cost[i];
	while (k <= i)
	{
		m = stack->cost[k];
		stack->cost[k] = tmp;
		tmp = m;
		k++;
	}
}

void	ft_rra(t_stack *stack)
{
	reverse_rotate(stack);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack *stack)
{
	reverse_rotate(stack);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
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
	stackb->size = 6;
	stacka->size = ac -1;
	 
	i =1;
	int k;
	k  =0;
	while (av[i])
	{
		stacka->cost[k++] = atoi(av[i]);
		i++;
	}
	i = 0;
	while (i < ac - 1)
	{
		printf("%d\t", stacka->cost[i]);
		i++;
	}
	i = 0;
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	ft_rrb(stacka);
	while (i < ac - 1)
	{
		printf("%d\t", stacka->cost[i]);
		i++;
	}
}*/