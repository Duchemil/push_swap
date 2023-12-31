/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:37:55 by lduchemi          #+#    #+#             */
/*   Updated: 2024/01/04 18:50:53 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_stack *stack)
{
	ft_ra(stack, 1);
	ft_rb(stack, 1);
	write(1, "rr\n", 3);
	return ;
}

void	ft_pa(t_stack *stack)
{
	t_list	*tmp;

	if (!stack->b)
		return ;
	tmp = stack->b;
	stack->b = tmp->next;
	tmp->next = stack->a;
	stack->a = tmp;
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack *stack)
{
	t_list	*tmp;

	if (!stack->a)
		return ;
	tmp = stack->a;
	stack->a = tmp->next;
	tmp->next = stack->b;
	stack->b = tmp;
	write(1, "pb\n", 3);
}

void	ft_rra(t_stack *stack, int i)
{
	t_list	*last;
	t_list	*second_last;

	if (stack->a != NULL && stack->a->next != NULL)
	{
		last = stack->a;
		while (last->next->next != NULL)
			last = last->next;
		second_last = last;
		last = last->next;
		last->next = stack->a;
		stack->a = last;
		second_last->next = NULL;
		if (i == 0)
			write(1, "rra\n", 4);
	}
}

void	ft_rrb(t_stack *stack, int i)
{
	t_list	*last;
	t_list	*second_last;

	if (stack->b != NULL && stack->b->next != NULL)
	{
		last = stack->b;
		while (last->next->next != NULL)
			last = last->next;
		second_last = last;
		last = last->next;
		last->next = stack->b;
		stack->b = last;
		second_last->next = NULL;
		if (i == 0)
			write(1, "rrb\n", 4);
	}
}
