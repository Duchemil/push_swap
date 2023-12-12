/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:37:55 by lduchemi          #+#    #+#             */
/*   Updated: 2023/12/12 13:25:13 by lduchemi         ###   ########.fr       */
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

void	ft_rra(t_stack *stack, int i)
{
	t_list	*tmp;
	t_list	*b;

	tmp = stack->a;
	b = stack->b;
	if (tmp == NULL || tmp->next == NULL)
		return ;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(&(stack->b), tmp);
	if (i == 0)
		write(1, "rra\n", 5);
}

void	ft_rrb(t_stack *stack, int i)
{
	t_list	*tmp;
	t_list	*a;

	tmp = stack->b;
	a = stack->a;
	if (tmp == NULL || tmp->next == NULL)
		return ;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(&(stack->a), tmp);
	if (i == 0)
		write(1, "rrb\n", 5);
}
