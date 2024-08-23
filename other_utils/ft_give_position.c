/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_give_position.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:35:53 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:35:55 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_give_position(t_list **a, int *c)
{
	int		i;
	t_list	*lst;

	lst = *a;
	while (lst)
	{
		i = 0;
		while (lst->content != c[i])
			i++;
		lst->pos = i;
		lst = lst->next;
	}
}
