/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:25:25 by lduchemi          #+#    #+#             */
/*   Updated: 2023/12/12 15:07:45 by lduchemi         ###   ########.fr       */
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
	long			content;
	struct s_list	*next;
}					t_list;

typedef struct s_stack
{
	t_list			*a;
	t_list			*b;
}					t_stack;

t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lst_secondlast(t_list *lst);
t_list				*ft_lstnew(long content);
long int			ft_atoi(const char *str);
void				ft_lstadd_back(t_list *lst, t_list *new);
void				ft_lstadd_front(t_list *lst, t_list *new);
void				ft_ss(t_stack *stack);
void				ft_rr(t_stack *stack);
void				ft_rrr(t_stack *stack);
void				ft_pa(t_stack *stack);
void				ft_pb(t_stack *stack);
void				ft_rra(t_stack *stack, int i);
void				ft_rrb(t_stack *stack, int i);
void				ft_sa(t_stack *stack, int i);
void				ft_sb(t_stack *stack, int i);
void				ft_ra(t_stack *stack, int i);
void				ft_rb(t_stack *stack, int i);
#endif
