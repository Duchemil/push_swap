/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:35:28 by lduchemi          #+#    #+#             */
/*   Updated: 2024/01/04 13:58:38 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_stack *stack, t_list *new)
{
	t_list	*test;

	if (stack->a == NULL)
		stack->a = new;
	else
	{
		test = stack->a;
		while (test->next != NULL)
			test = test->next;
		test->next = new;
	}
}

t_list	*ft_lstnew(long content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list *lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = lst;
		lst = new;
	}
}
