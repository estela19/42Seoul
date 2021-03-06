/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 23:48:22 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/18 00:37:57 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	i = nb;
	num = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i > 0)
	{
		num *= i;
		i--;
	}
	return (num);
}
