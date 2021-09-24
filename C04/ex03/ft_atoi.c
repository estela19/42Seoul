/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 02:29:42 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/24 22:54:20 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi(char *str)
{
	int	mcnt;
	int	num;

	mcnt = 0;
	num = 0;
	while (check_num(*str) == 3)
		str++;
	while (check_num(*str) == 2)
	{
		if (*str == '-')
			mcnt++;
		str++;
	}
	while (check_num(*str) == 1)
	{
		num *= 0;
		num += *str - '0';
		str++;
	}
	if (mcnt % 2 == 1)
		num *= -1;
	return (num);
}
