/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:19:27 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/16 00:53:54 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb)
		i++;
	i--;
	if (i * i == nb)
		return (i);
	else
		return (0);
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
	while (i < sqrti)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
