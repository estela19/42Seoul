/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 01:17:28 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/15 12:48:56 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_nbr(long n)
{
	long	i;
	char	buf[256];

	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
	}
	while (n)
	{
		buf[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (--i >= 0 )
	{
		write(1, &buf[i], 1);
	}
}

void	ft_putnbr(int nb)
{
	long	n;

	if (nb >= 0)
	{
		print_nbr(nb);
	}
	else
	{
		write(1, "-", 1);
		n = nb;
		n *= -1;
		print_nbr(n);
	}
}
