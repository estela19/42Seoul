/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:01:12 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/16 01:17:07 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	else if (nb <= 0)
		return (0);
	if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else
		return (ft_recursive_power(nb, power - 1) * nb);
}
