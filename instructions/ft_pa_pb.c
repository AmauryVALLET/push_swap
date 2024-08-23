/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:34:55 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:34:58 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_list **a, t_list **b, int i)
{
	t_list	*lst;

	if (*b == NULL)
		return ;
	lst = *b;
	*b = lst->next;
	lst->next = NULL;
	ft_lstadd_front(a, lst);
	if (i == 1)
		write(1, "pa\n", 3);
}

void	ft_pb(t_list **a, t_list **b, int i)
{
	t_list	*lst;

	if (*a == NULL)
		return ;
	lst = *a;
	*a = lst->next;
	lst->next = NULL;
	ft_lstadd_front(b, lst);
	if (i == 1)
		write(1, "pb\n", 3);
}
