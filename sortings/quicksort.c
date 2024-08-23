/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:36:21 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:36:25 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_partitioning(int *c, int start, int end)
{
	int	i;
	int	j;
	int	pivot;

	pivot = c[end];
	i = (start - 1);
	j = start;
	while (j <= end - 1)
	{
		if (c[j] <= pivot)
		{
			i++;
			swap(&c[i], &c[j]);
		}
		j++;
	}
	swap(&c[i + 1], &c[end]);
	return (i + 1);
}

void	ft_quicksort(int *c, int start, int end)
{
	int	j;

	if (start < end)
	{
		j = ft_partitioning(c, start, end);
		ft_quicksort(c, start, j - 1);
		ft_quicksort(c, j + 1, end);
	}
}
