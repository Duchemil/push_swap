/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:37:55 by lduchemi          #+#    #+#             */
/*   Updated: 2023/12/04 17:02:45 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_stack *stack)
{
	ft_ra(stack, 1);
	ft_rb(stack, 1);
	write(1, "rr\n", 4);
	return ;
}

void	ft_pa(t_stack *stack)
{
	t_list	*tmp;

	if (!stack->a)
		return ;
	tmp = stack->b;
	stack->b = tmp->next;
	tmp->next = stack->a;
	stack->a = tmp;
	write(1, "pa\n", 4);
}

void	ft_pb(t_stack *stack)
{
	t_list	*tmp;

	if (!stack->b)
		return ;
	tmp = stack->a;
	stack->a = tmp->next;
	tmp->next = stack->b;
	stack->b = tmp;
	write(1, "pb\n", 4);
}
