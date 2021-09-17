/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:27:12 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/18 00:12:47 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft_stock_str.h"

void	print_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, '\n', 1);
}

void	print_num(int num)
{
	int	i;
	int	buff[100];

	i = 0;
	while (num)
	{
		buff[i++] = num % 10;
		num /= 10;
	}
	i--;
	while (i >= 0)
	{
		write(1, &buff[i], 1);
	}
	write(1, '\n', 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	print_str(par->str);
	print_num(par->size);
	print_str(par->copy);
}
