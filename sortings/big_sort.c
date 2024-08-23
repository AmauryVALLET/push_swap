/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:36:10 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:36:16 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_big_stack(t_list **a, t_list **b, int size)
{
	int	i;
	int	j;
	int	nbr;
	int	max_nbr;
	int	max_bits;

	max_nbr = size - 1;
	max_bits = 0;
	while ((max_nbr >> max_bits) != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			nbr = (*a)->pos;
			if (((nbr >> i) & 1) == 1)
				ft_ra(a, 1);
			else
				ft_pb(a, b, 1);
		}
		while (*b)
			ft_pa(a, b, 1);
	}
}
