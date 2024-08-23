/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:35:45 by avallet           #+#    #+#             */
/*   Updated: 2023/04/21 15:32:19 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_clear_list(t_list **lst)
{
	t_list	*tmp;
	t_list	*elt;

	elt = *lst;
	tmp = NULL;
	if (!lst || !*lst)
		return ;
	while (elt)
	{
		if (elt->next)
			tmp = elt->next;
		else
			tmp = NULL;
		free(elt);
		elt = tmp;
	}
	*lst = NULL;
}

void	ft_free_all(t_list **a, t_list **b, int *c)
{
	ft_clear_list(a);
	ft_clear_list(b);
	free(c);
	c = NULL;
}

void	ft_free_all_exit(t_list **a, t_list **b, int *c)
{
	ft_clear_list(a);
	ft_clear_list(b);
	free(c);
	c = NULL;
	exit (1);
}

void	free_string_array(char **split)
{
	int	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
}
