/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:46:41 by lduchemi          #+#    #+#             */
/*   Updated: 2023/12/12 15:18:09 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("Contenu lst : %ld ", lst->content);
		lst = lst->next;
	}
	printf("\n");
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
		ft_lstadd_back(stack.a, ft_lstnew(ft_atoi(argv[i])));
		printf("I : %d\n", i);
		i++;
	}
	print_list(stack.a);
	return (0);
}
