/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 02:38:07 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/29 01:54:14 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "utility.h"

long long int	parse_int(char *str)
{
	int				mcnt;
	long long int	num;

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
		num *= 10;
		num += *str - '0';
		str++;
	}
	if (mcnt % 2 == 1)
		num *= -1;
	return (num);
}

int	classifyop(char op)
{
	if (op == '+')
		return (ADD);
	else if (op == '-')
		return (SUB);
	else if (op == '*')
		return (MUL);
	else if (op == '/')
		return (DIV);
	else if (op == '%')
		return (MOD);
	else
		return (-1);
}

int	parse_op(char *op)
{
	if (ft_strlen(op) != 1)
		return (-1);
	else
		return (classifyop(*op));
}
