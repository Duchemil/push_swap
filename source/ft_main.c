/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:46:41 by lduchemi          #+#    #+#             */
/*   Updated: 2024/01/04 17:25:29 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("Contenu lst : %ld, index : %d\n", lst->content, lst->index);
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

void	update_index(t_list *list)
{
	int		i;
	t_list	*current;
	t_list	*temp;

	current = list;
	while (current != NULL)
	{
		i = 0;
		temp = list;
		while (temp != NULL)
		{
			if (temp->content < current->content)
				i++;
			temp = temp->next;
		}
		current->index = i;
		current = current->next;
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
	update_index(stack.a);
	update_index(stack.b);
	ft_sort(&stack);
	free_list(stack.a);
	free_list(stack.b);
	return (0);
}

void	ft_sort(t_stack *stack)
{
	t_list	*a;

	a = stack->a;
	if (is_list_sorted(a))
		return ;
	if (ft_len_stack(stack->a) == 2)
	{
		if (stack->a->content > stack->a->next->content)
			ft_ra(stack, 0);
	}
	else if (ft_len_stack(stack->a) == 3)
		ft_three(stack);
	else if (ft_len_stack(stack->a) == 4)
		ft_four(stack);
	else if (ft_len_stack(stack->a) == 5)
		ft_five(stack);
	else if (ft_len_stack(stack->a) > 5)
		ft_radix(stack);
}
