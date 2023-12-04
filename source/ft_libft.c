/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:35:28 by lduchemi          #+#    #+#             */
/*   Updated: 2023/12/04 15:37:02 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
t_stack	*ft_lstnew(void *content)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->a->content = content;
	new->a->next = NULL;
	return (new);
}
