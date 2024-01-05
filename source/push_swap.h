/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:25:25 by lduchemi          #+#    #+#             */
/*   Updated: 2024/01/05 15:33:47 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	long			content;
	struct s_list	*next;
	int				index;
}					t_list;

typedef struct s_stack
{
	t_list			*a;
	t_list			*b;
}					t_stack;

t_list				*ft_lstnew(long content);
long int			ft_atoi(const char *str);
void				free_list(t_list *list);
void				ft_lstadd_back(t_stack *stack, t_list *new);
void				ft_lstadd_front(t_list *lst, t_list *new);
int					ft_len_stack(t_list *lst);
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
int					ft_int(const char *str);
int					ft_big(const char *str);
int					ft_dupe(t_list *lst);
void				ft_radix(t_stack *stack);
void				ft_three(t_stack *stack);
void				ft_four(t_stack *stack);
void				ft_five(t_stack *stack);
void				ft_sort(t_stack *stack);
int					is_list_sorted(t_list *list);
void				update_index(t_list *list);

#endif
