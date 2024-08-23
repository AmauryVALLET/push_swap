/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:30:48 by avallet           #+#    #+#             */
/*   Updated: 2023/04/21 12:36:29 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_and_sort(t_list **a, t_list **b, int *c, int size)
{
	if (ft_repeat_checking(c, size) != 0)
	{
		write(2, "Error\n", 6);
		return ;
	}
	ft_quicksort(c, 0, size - 1);
	if (ft_is_sorted(a, c, size - 1))
		return ;
	ft_give_position(a, c);
	if (size <= 5)
		sort_small_stack(a, b, c, size);
	else
		sort_big_stack(a, b, size);
}

void	ft_loading(int argc, char **argv, int i, int len)
{
	t_list	*a;
	t_list	*b;
	int		*c;
	int		j;

	a = NULL;
	b = NULL;
	c = ft_mal(len, argc);
	if (c == NULL)
		ft_free_all_exit(&a, &b, c);
	j = -1;
	while (i < argc)
	{
		if (ft_parsing(argv, argc, i) != 0)
		{
			ft_free_all(&a, &b, c);
			return ;
		}
		c[++j] = ft_atoi(argv[i]);
		ft_init(&a, argv, i);
		i++;
	}
	ft_check_and_sort(&a, &b, c, ft_lstsize(a));
	ft_free_all(&a, &b, c);
}

int	main(int argc, char **argv)
{
	int		len;
	char	**split;

	split = NULL;
	if (argc < 2 || argv[1][0] == 0)
		return (1);
	len = 0;
	if (argc == 2)
	{
		if (ft_split_spaces(argv[1]) == 1)
			return (1);
		split = ft_split(argv[1], ' ');
		while (split[len] != NULL)
			len++;
		argc = len;
	}
	if (split == NULL)
		ft_loading(argc, argv, 1, len);
	else
	{
		ft_loading(argc, split, 0, len);
		free_string_array(split);
	}
	return (0);
}
