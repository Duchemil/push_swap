/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:15:59 by lduchemi          #+#    #+#             */
/*   Updated: 2024/01/04 19:21:23 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix(t_stack *stack)
{
	t_list	*a;
	int		len;
	int		max_bits;
	int		i;
	int		j;

	len = ft_len_stack(stack->a);
	max_bits = 0;
	while ((len - 1) >> max_bits != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			a = stack->a;
			if (((a->index >> i) & 1) == 1)
				ft_ra(stack, 0);
			else
				ft_pb(stack);
		}
		while (stack->b)
			ft_pa(stack);
	}
}

void	ft_three(t_stack *stack)
{
	long t;
	long m;
	long b;

	t = stack->a->content;
	m = stack->a->next->content;
	b = stack->a->next->next->content;
	if (t > m && m < b && b > t)
		ft_sa(stack, 0);
	if (t > m && m > b && b < t)
		{
			ft_sa(stack, 0);
			ft_rra(stack, 0);
		}
	if (t > m && m < b && b < t)
		ft_ra(stack, 0);
	if (t < m && m > b && b > t)
		{
			ft_sa(stack, 0);
			ft_ra(stack, 0);
		}
	if (t < m && m > b && b < t)
		ft_rra(stack, 0);
}

void	ft_four(t_stack *stack)
{
	while (stack->a->index != 0)
		ft_ra(stack, 0);
	ft_pb(stack);
	ft_three(stack);
	ft_pa(stack);
	if (stack->a->content > stack->a->next->next->next->content)
		ft_ra(stack, 0);
}

void	ft_five(t_stack *stack)
{
	ft_three(stack);
	ft_pb(stack);
	ft_pb(stack);
	ft_three(stack);
	ft_pa(stack);
	ft_pa(stack);
	ft_four(stack);
}
