/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_abss.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:35:21 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:35:24 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_list *a, int i)
{
	int	tmp;
	int	tmp2;

	if (a == NULL || a->next == NULL)
		return ;
	tmp = a->content;
	tmp2 = a->pos;
	a->content = a->next->content;
	a->pos = a->next->pos;
	a->next->content = tmp;
	a->next->pos = tmp2;
	if (i == 1)
		write(1, "sa\n", 3);
}

void	ft_sb(t_list *b, int i)
{
	int	tmp;

	if (b == NULL || b->next == NULL)
		return ;
	tmp = b->content;
	b->content = b->next->content;
	b->next->content = tmp;
	if (i == 1)
		write(1, "sb\n", 3);
}

void	ft_ss(t_list *a, t_list *b, int i)
{
	ft_sa(a, i);
	ft_sb(b, i);
	if (i == 1)
		write(1, "ss\n", 3);
}
