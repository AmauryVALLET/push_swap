/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:20:51 by avallet           #+#    #+#             */
/*   Updated: 2023/04/24 11:23:58 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdio.h>

void	ft_sa(t_list *a, int i);
void	ft_sb(t_list *b, int i);
void	ft_ss(t_list *a, t_list *b, int i);
void	ft_ra(t_list **a, int i);
void	ft_rb(t_list **b, int i);
void	ft_rr(t_list **a, t_list **b, int i);
void	ft_rra(t_list **a, int i);
void	ft_rrb(t_list **b, int i);
void	ft_rrr(t_list **a, t_list **b, int i);
void	ft_pa(t_list **a, t_list **b, int i);
void	ft_pb(t_list **a, t_list **b, int i);
int		ft_check_digit_error(char **argv, int i);
int		ft_repeat_checking(int *c, int argc);
void	ft_quicksort(int *c, int start, int end);
int		ft_is_sorted(t_list **a, int *c, int size);
void	ft_give_position(t_list **a, int *c);
void	ft_error(void);
void	sort_small_stack(t_list **a, t_list **b, int *c, int arg);
void	sort_big_stack(t_list **a, t_list **b, int size);
void	ft_free_all(t_list **a, t_list **b, int *c);
int		get_next_line(char **line);
int		ft_strcmp(char *s1, char *s2);
void	ft_clear_list(t_list **lst);
void	free_string_array(char **split);
int		ft_check_overflow(char **argv, int ac, int split);
long	ft_atolong(char *str);
int		ft_split_spaces(char *str);
int		ft_parsing(char **argv, int argc, int i);
void	ft_free_all_exit(t_list **a, t_list **b, int *c);
int		*ft_mal(int len, int argc);
void	ft_init(t_list **a, char **argv, int i);
#endif
