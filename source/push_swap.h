/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:25:25 by lduchemi          #+#    #+#             */
/*   Updated: 2023/12/04 17:02:58 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_stack
{
	t_list			*a;
	t_list			*b;
}					t_stack;

t_list				*ft_lstlast(t_list *lst);
t_stack				*ft_lstnew(void *content);
void				ft_ss(t_stack *stack);
void				ft_rr(t_stack *stack);
void				ft_pa(t_stack *stack);
void				ft_pb(t_stack *stack);
void				ft_sa(t_stack *stack, int i);
void				ft_sb(t_stack *stack, int i);
void				ft_ra(t_stack *stack, int i);
void				ft_rb(t_stack *stack, int i);
#endif
