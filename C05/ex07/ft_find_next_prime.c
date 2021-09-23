/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:23:57 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/23 23:23:45 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i < 46341)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrti;

	i = 2;
	sqrti = ft_sqrt(nb);
	if (nb == 0 || nb == 1)
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
