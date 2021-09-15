/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 02:29:42 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/15 23:45:08 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_num(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	mcnt;
	int	num;

	num = 0;
	mcnt = 0;
	while (!check_num(*str))
	{
		if (*str == '-')
			mcnt++;
		str++;
	}
	while (*str != '\0')
	{
		if (check_num(*str))
		{
			num *= 10;
			num += *str - '0';
		}
		else
			break ;
		str++;
	}
	if (mcnt % 2)
		num *= -1;
	return (num);
}
