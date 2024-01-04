/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:23:39 by lduchemi          #+#    #+#             */
/*   Updated: 2024/01/04 14:59:48 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack *stack, int i)
{
	long	tmp;
	t_list	*a;

	if (!stack->a->next || !stack->a->content)
		return ;
	a = stack->a;
	tmp = a->next->content;
	a->next->content = a->content;
	a->content = tmp;
	if (i == 0)
		write(1, "sa\n", 4);
	return ;
}

void	ft_sb(t_stack *stack, int i)
{
	long	tmp;
	t_list	*b;

	if (!stack->b->next || !stack->b->content)
		return ;
	b = stack->b;
	tmp = b->next->content;
	b->next->content = b->content;
	b->content = tmp;
	if (i == 0)
		write(1, "sb\n", 4);
	return ;
}

void	ft_ra(t_stack *stack, int i)
{
	t_list	*bottom;
	t_list	*tmp;

	if (!stack->a || !stack->a->next)
		return ;
	tmp = stack->a;
	stack->a = stack->a->next;
	tmp->next = NULL;
	bottom = stack->a;
	while (bottom->next != NULL)
		bottom = bottom->next;
	bottom->next = tmp;
	if (i == 0)
		write(1, "ra\n", 4);
	return ;
}

void	ft_rb(t_stack *stack, int i)
{
	t_list	*bottom;
	t_list	*tmp;

	if (!stack->b || !stack->b->next)
		return ;
	tmp = stack->b;
	stack->b = stack->b->next;
	tmp->next = NULL;
	bottom = stack->b;
	while (bottom->next != NULL)
		bottom = bottom->next;
	bottom->next = tmp;
	if (i == 0)
		write(1, "rb\n", 4);
	return ;
}

void	ft_ss(t_stack *stack)
{
	ft_sa(stack, 1);
	ft_sb(stack, 1);
	write(1, "ss\n", 4);
	return ;
}
