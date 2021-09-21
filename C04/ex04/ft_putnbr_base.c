/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:02:54 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/22 00:18:05 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_valid(char *base)
{
	int	i;
	int	check[300];

	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	else
	{
		i = 0;
		while (i++ < 300)
			check[i] = 0;
		while (*base != '\0')
		{
			if (*base == '+' || *base == '-')
				return (0);
			if (check[(int)*base] != 0)
				return (0);
			check[(int)*base]++;
			base++;
		}
		return (1);
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

void	convert(long long nbr, char *base)
{
	 int		i;
	 int		len;
	 int		tmp;
	long long	buff[100];

	i = 0;
	tmp = 0;
	len = ft_strlen(base);
	while (nbr > 0)
	{
		buff[i++] = nbr % len;
		nbr /= len;
	}
	while (--i >= 0)
	{
		tmp = buff[i];
		write(1, base + tmp, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	tmp;

	if (!is_valid(base))
		;
	else
	{
		if (nbr == 0)
			write(1, base, 1);
		else
		{
			tmp = nbr;
			if (nbr < 0)
			{
				write(1, "-", 1);
				tmp *= -1;
			}
			convert(tmp, base);
		}
	}
}
