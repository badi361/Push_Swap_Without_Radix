/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baran <baran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:17:24 by bguzel            #+#    #+#             */
/*   Updated: 2023/02/26 23:36:24 by baran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b->cost == NULL)
		return ;
	stack_a->size++;
	stack_a->cost = upper_cast(stack_a->cost, stack_a->size);
	stack_a->cost[0] = stack_b->cost[0];
	stack_b->size--;
	stack_b->cost = lower_cast(stack_b->cost, stack_b->size);
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->cost == NULL)
		return ;
	stack_b->size++;
	stack_b->cost = upper_cast(stack_b->cost, stack_b->size);
	stack_b->cost[0] = stack_a->cost[0];
	stack_a->size--;
	stack_a->cost = lower_cast(stack_a->cost, stack_a->size);
	write(1, "pb\n", 3);
}
int		*upper_cast(int *stack_f, int size)
{
	int		i;
	int		k;

	i = 1;
	k = 0;
	while (i < size)
	{
		stack_f[i] = stack_f[k];
		i++;
		k++;
	}
	return (stack_f);
}

int		*lower_cast(int *stack_f, int size)
{
	int		i;
	int		k;

	i = 0;
	k = 1;
	while(i <= size)
	{
		stack_f[i] = stack_f[k];
		i++;
		k++;
	}
	return (stack_f);
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
	ft_pb(stacka, stackb);
	while (i < ac - 1)
	{
		printf("%d\t", stackb->cost[i]);
		i++;
	}
	i = 0;
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	while (i < ac - 1)
	{
		printf("%d\t", stacka->cost[i]);
		i++;
	}
	printf("\n");
	printf("\n");
	printf("\n");
	be_formed(av, stacka);
	printf("%d", stacka->size);
}*/