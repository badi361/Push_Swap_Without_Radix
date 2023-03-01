#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int	size;
	int	*cost;
}t_stack;

void	reverse_rotate(t_stack *stack);
void	samearg(t_stack *stack);
void	ft_rra(t_stack *stack);
void	ft_rrb(t_stack *stack);
void	ft_rrr(t_stack *stack_a, t_stack *stack_b);
void	rotate(t_stack *stack);
void	ft_ra(t_stack *stack_a);
void	ft_rb(t_stack *stack_b);
void	ft_rr(t_stack *stack_a, t_stack *stack_b);
void	swap(t_stack *stack);
void	ft_sa(t_stack *stack_a);
void	ft_sb(t_stack *stack_b);
void	ft_ss(t_stack *stack_a, t_stack *stack_b);
void	ft_pa(t_stack *stack_a, t_stack *stack_b);
void	ft_pb(t_stack *stack_a, t_stack *stack_b);
void	symbolcheck(char **av, t_stack *stack);
void	is_it_int(char c);
void	be_formed(char **av, t_stack *stack);
void    two_arg(t_stack *stack);
void    three_arg(t_stack *stacka);
void	first_part(t_stack *stacka, t_stack *stackb);
void	four_arg(t_stack *stacka, t_stack *stackb);
void	five_and_small(t_stack *stacka, t_stack *stackb);
void	five_arg(t_stack *stacka, t_stack *stackb);
void	max_min_check(t_stack *stack);
void	next_index_check(char *s);
void	six_and_more_small(t_stack *stacka, t_stack *stackb);
void	is_it_sort(t_stack *stacka);
int		*upper_cast(int *stack_f, int size);
int		*lower_cast(int *stack_f, int size);
int		ft_atoi(const char *str);
int		word_len(const char *src, char d);
int		counter(char **av);
int		word_counter(char const *s1, char a);
int		find_smallest(int *arr, int size);
char	**ft_split(char const *s, char c);
char	*stringer(char const *src, char b);
char	**split_and_add(char **av, t_stack *stack);

#endif