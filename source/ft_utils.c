/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:37:34 by lduchemi          #+#    #+#             */
/*   Updated: 2024/01/04 16:45:39 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(const char *str)
{
	long int	nb;
	int			isneg;
	int			i;

	nb = 0;
	isneg = 1;
	i = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while ((str[i]) >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * isneg);
}

int	ft_int(const char *str)
{
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	while (str[i])
	{
		if ((str[0]) == '-' && neg == 0)
		{
			neg = 1;
			i++;
		}
		if ((str[i]) >= '0' && str[i] <= '9')
			i++;
		else
			return (write(2, "Error, an argument isn't an int\n", 33), 1);
	}
	return (0);
}

int	ft_big(const char *str)
{
	long	nb;

	nb = ft_atoi(str);
	if (nb > 2147483647 || nb < -2147483648)
		return (write(2, "Error, an argument is not within int limits\n",
				45), 1);
	return (0);
}

int	ft_dupe(t_list *lst)
{
	t_list	*current;
	t_list	*compare;

	current = lst;
	while (current != NULL)
	{
		compare = current->next;
		while (compare != NULL)
		{
			if (current->content == compare->content)
				return (write(2, "Error, duplicate in arguments\n", 31), 1);
			compare = compare->next;
		}
		current = current->next;
	}
	return (0);
}

int	ft_len_stack(t_list *lst)
{
	t_list	*current;
	int		i;

	current = lst;
	i = 0;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
