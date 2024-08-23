/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:21:35 by avallet           #+#    #+#             */
/*   Updated: 2023/04/21 15:34:20 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atolong(char *str)
{
	long	atoi;
	int		neg;
	int		p;

	p = 0;
	atoi = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = neg * -1;
		str++;
		p++;
	}
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		atoi = atoi * 10 + (*str++) - 48;
		if (++p > 11)
			return (2147483648);
	}
	return (atoi * neg);
}

int	ft_split_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	*ft_mal(int len, int argc)
{
	int	*c;

	if (len != 0)
		c = malloc(sizeof(int) * (argc));
	else
		c = malloc(sizeof(int) * (argc - 1));
	return (c);
}

void	ft_init(t_list **a, char **argv, int i)
{
	t_list	*new;

	new = ft_lstnew(ft_atoi(argv[i]));
	ft_lstadd_back(a, new);
}
