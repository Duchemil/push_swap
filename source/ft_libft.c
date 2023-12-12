/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:35:28 by lduchemi          #+#    #+#             */
/*   Updated: 2023/12/12 15:17:15 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (lst);
}

t_list	*ft_lst_secondlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

void	ft_lstadd_back(t_list *lst, t_list *new)
{
	t_list	*curr;
	t_list	*prec;

	curr = lst;
	while (curr)
	{
		prec = curr;
		curr = curr->next;
	}
	prec->next = new;
}

t_list	*ft_lstnew(long content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	printf("Chiffre : %ld\n", content);
	new->content = content;
	new->next = NULL;
	printf("Chiffre new : %ld\n", new->content);
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
