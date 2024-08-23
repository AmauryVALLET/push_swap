/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:37:12 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:37:16 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_3(t_list **a)
{
	if ((*a)->content < (*a)->next->content && \
	(*a)->content < (*a)->next->next->content && \
	(*a)->next->content > (*a)->next->next->content)
	{
		ft_sa(*a, 1);
		ft_ra(a, 1);
	}
	else if ((*a)->content > (*a)->next->content \
	&& (*a)->content < (*a)->next->next->content)
		ft_sa(*a, 1);
	else if ((*a)->content < (*a)->next->content \
	&& (*a)->content > (*a)->next->next->content)
		ft_rra(a, 1);
	else if ((*a)->content > (*a)->next->content \
	&& (*a)->content > (*a)->next->next->content \
	&& (*a)->next->content < (*a)->next->next->content)
		ft_ra(a, 1);
	else if ((*a)->content > (*a)->next->content \
	&& (*a)->next->content > (*a)->next->next->content)
	{
		ft_sa(*a, 1);
		ft_rra(a, 1);
	}
}

void	ft_min_find(t_list **a, int *c, int pos, int arg)
{
	t_list	*lst;
	int		index;

	lst = *a;
	index = 0;
	while (lst->content != c[pos])
	{
		lst = lst->next;
		index++;
	}
	if (index > arg / 2)
	{
		while ((*a)->content != c[pos])
			ft_rra(a, 1);
	}
	else
	{
		while ((*a)->content != c[pos])
			ft_ra(a, 1);
	}
}

void	ft_sort_4(t_list **a, t_list **b, int *c, int arg)
{
	ft_min_find(a, c, 0, arg);
	ft_pb(a, b, 1);
	ft_sort_3(a);
	ft_pa(a, b, 1);
}

void	ft_sort_5(t_list **a, t_list **b, int *c, int arg)
{
	ft_min_find(a, c, 0, arg);
	ft_pb(a, b, 1);
	ft_min_find(a, c, 1, arg);
	ft_pb(a, b, 1);
	ft_sort_3(a);
	ft_pa(a, b, 1);
	ft_pa(a, b, 1);
}

void	sort_small_stack(t_list **a, t_list **b, int *c, int arg)
{
	if (arg == 2)
		ft_sa(*a, 1);
	else if (arg == 3)
		ft_sort_3(a);
	else if (arg == 4)
		ft_sort_4(a, b, c, arg);
	else if (arg == 5)
		ft_sort_5(a, b, c, arg);
}
