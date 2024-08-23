/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_a_b_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:35:03 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:35:06 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_list **a, int i)
{
	t_list	*lst;

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	lst = *a;
	*a = lst->next;
	lst->next = NULL;
	ft_lstadd_back(a, lst);
	if (i == 1)
		write(1, "ra\n", 3);
}

void	ft_rb(t_list **b, int i)
{
	t_list	*lst;

	if ((*b) == NULL || (*b)->next == NULL)
		return ;
	lst = *b;
	*b = lst->next;
	lst->next = NULL;
	ft_lstadd_back(b, lst);
	if (i == 1)
		write(1, "rb\n", 3);
}

void	ft_rr(t_list **a, t_list **b, int i)
{
	ft_ra(a, i);
	ft_rb(b, i);
	if (i == 1)
		write(1, "rr\n", 3);
}
