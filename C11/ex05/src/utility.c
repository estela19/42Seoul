/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 00:07:04 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/25 01:12:24 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

int	check_num(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else if (a == '+' || a == '-')
		return (2);
	else if (a == ' ' || a == '\t' || a == '\n' || a == '\r'\
	|| a == '\f' || a == '\v')
		return (3);
	else
		return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (1)
	{
		if (*str == '\0')
			break ;
		str++;
		i++;
	}
	return (i);
}

void	print(char *a)
{
	while (*a != '\0')
	{
		write(1, a, 1);
		a++;
	}
}

void	zero_error(char *str)
{
	print("Stop : ");
	print(str);
	print(" by zero");
}

void	print_num(int nb)
{
	char	c;

	if (nb / 10 == 0)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		c = nb % 10 + '0';
		print_num(nb / 10);
		write(1, &c, 1);
	}
}
