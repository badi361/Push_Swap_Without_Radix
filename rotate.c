/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baran <baran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:51:31 by bguzel            #+#    #+#             */
/*   Updated: 2023/02/26 23:35:07 by baran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	int tmp;
	int i;
	int	k;

	i = stack->size - 1;
	tmp = stack->cost[i];
	stack->cost[i] = stack->cost[0];
	
	while (i >= 0)
	{
		k = stack->cost[i - 1];
		stack->cost[i - 1] = tmp;
		tmp = k;
		i--;
	}
}

void	ft_ra(t_stack *stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack *stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
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
	ft_rr(stacka, stackb);
	while (i < ac - 1)
	{
		printf("%d\t", stacka->cost[i]);
		i++;
	}
}*/