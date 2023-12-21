/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:46:41 by lduchemi          #+#    #+#             */
/*   Updated: 2023/12/21 17:30:43 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("Contenu lst : %ld\n", lst->content);
		lst = lst->next;
	}
}

void	free_list(t_list *list)
{
	t_list	*current;
	t_list	*next;

	current = list;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	t_stack	stack;

	stack.a = NULL;
	stack.b = NULL;
	i = 1;
	if (argc < 2)
		return (0);
	while (argv[i])
	{
		if (ft_big(argv[i]) == 1 || ft_int(argv[i]) == 1)
			return (free_list(stack.a), 1);
		ft_lstadd_back(&stack, ft_lstnew(ft_atoi(argv[i])));
		i++;
		if (ft_dupe(stack.a) == 1)
			return (free_list(stack.a), 1);
	}
	printf("Stack a : \n");
	print_list(stack.a);
	printf("Stack b : \n");
	print_list(stack.b);
	free_list(stack.a);
	free_list(stack.b);
	return (0);
}
