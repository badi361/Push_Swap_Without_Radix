/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baran <baran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:31:05 by bguzel            #+#    #+#             */
/*   Updated: 2023/02/26 23:35:02 by baran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int		tmp;

	if (stack->size > 1)
	{
		tmp = stack->cost[0];
		stack->cost[0] = stack->cost[1];
		stack->cost[1] = tmp;
	}
}

void	ft_sa(t_stack *stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack *stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
/*int main(int ac, char **av)
{
	t_stack *stacka;
	t_stack	*stackb;
	int i;


	stacka = malloc(sizeof(t_stack));
	stacka->cost = malloc(sizeof(int) * ac - 1);
	stacka->size = ac - 1;
	stackb = malloc(sizeof(t_stack));
	stackb->cost = malloc(sizeof(int) * ac - 1);
	 
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
	ft_sa(stacka);
	while (i < ac - 1)
	{
		printf("%d\t", stacka->cost[i]);
		i++;
	}
}*/
