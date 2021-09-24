/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:19:27 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/24 22:38:13 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46341)
		i++;
	i--;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrti;

	i = 2;
	sqrti = ft_sqrt(nb);
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	else if (nb == 2)
		return (1);
	while (i <= sqrti)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
