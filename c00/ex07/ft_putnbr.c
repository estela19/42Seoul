/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 01:02:24 by estela19          #+#    #+#             */
/*   Updated: 2021/09/15 23:52:07 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	get_length(int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

void	print(int n)
{
	char	c;

	c = '0' + n;
	write(1, &c, 1);
}

long long int	abs_(long long int nb)
{
	if (nb < 0)
	{
		return (-nb);
	}
	else
	{
		return (nb);
	}
}

void	ft_putnbr(int nb)
{
	 int			arr[20];
	 int			len;
	long long int	num;
	long long int	orignum;

	len = 0;
	num = abs_(nb);
	orignum = num;
	while (num != 0)
	{
		arr[len] = num % 10;
		num /= 10;
		len++;
	}
	if (nb != orignum)
		write(1, "-", 1);
	if (nb == 0)
		write(1, "0", 1);
	while (len > 0)
	{
		print(arr[len - 1]);
		len--;
	}
}
