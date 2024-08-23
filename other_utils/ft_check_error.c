/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:35:38 by avallet           #+#    #+#             */
/*   Updated: 2023/04/21 15:33:31 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_list **a, int *c, int size)
{
	t_list	*lst;
	int		i;

	lst = *a;
	i = 0;
	while (i < size)
	{
		if (lst->content != c[i])
			return (0);
		i++;
		lst = lst->next;
	}
	return (1);
}

int	ft_repeat_checking(int *c, int size)
{
	int	i;
	int	j;
	int	err;

	err = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (c[i] == c[j] && i != j)
				err++;
			j++;
		}
		i++;
	}
	return (err);
}

int	ft_check_digit_error(char **argv, int i)
{
	int		j;
	int		l;

	j = 0;
	l = 0;
	if (argv[i][0] == '-')
	{
		j++;
		if (argv[i][1] == '\0')
			l++;
	}
	while (argv[i][j] != '\0')
	{
		if (ft_isdigit(argv[i][j]) == 0)
			l++;
		j++;
	}
	return (l);
}

int	ft_check_overflow(char **av, int ac, int split)
{
	int		i;
	long	nbrber;

	if (split == 1)
		i = 1;
	else
		i = 0;
	while (i < ac && av[i] != NULL)
	{
		nbrber = ft_atolong(av[i]);
		if (nbrber > 2147483647 || nbrber < -2147483648)
			return (1);
		else
			i++;
	}
	return (0);
}

int	ft_parsing(char **argv, int argc, int i)
{
	int	j;

	j = 0;
	if (ft_check_digit_error(argv, i) != 0)
	{
		j++;
		write(1, "Error\n", 6);
		return (j);
	}
	if (ft_check_overflow(argv, argc, i) != 0)
	{
		j++;
		write(1, "Error\n", 6);
		return (j);
	}
	return (j);
}
