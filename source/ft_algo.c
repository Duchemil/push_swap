/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:15:59 by lduchemi          #+#    #+#             */
/*   Updated: 2024/01/04 14:21:48 by lduchemi         ###   ########.fr       */
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
