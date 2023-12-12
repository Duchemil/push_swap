/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:23:39 by lduchemi          #+#    #+#             */
/*   Updated: 2023/12/12 15:09:53 by lduchemi         ###   ########.fr       */
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
	t_list	*top;
	t_list	*bottom;
	long	tmp;

	if (!stack->a || !stack->a->next)
		return ;
	top = stack->a;
	bottom = ft_lstlast(stack->a);
	tmp = top->content;
	top->content = bottom->content;
	bottom->content = tmp;
	if (i == 0)
		write(1, "ra\n", 4);
	return ;
}

void	ft_rb(t_stack *stack, int i)
{
	t_list	*top;
	t_list	*bottom;
	long	tmp;

	if (!stack->b || !stack->b->next)
		return ;
	top = stack->b;
	bottom = ft_lstlast(stack->b);
	tmp = top->content;
	top->content = bottom->content;
	bottom->content = tmp;
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
