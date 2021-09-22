/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 02:38:07 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/22 08:55:35 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int	checkint(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

int	parseint(char *a)
{
	int	num;

	num = 0;
	while (*a != '\0')
	{
		if (checkint(*a))
		{
			num *= 10;
			num += *a;
		}
		else
			break ;
	}
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

int parse_pm_operator(char *op)
{
	int	mcnt;

	mcnt = 0;
	while (*op != '\0')
	{
		if (*op == '-')
			mcnt++;
		else if (*op == '+')
			;
		else
		{
			return (-1);
		}
		*op++;
	}
	return (mcnt);
}

int	parseoperator(char *op)
{
	int	op[5];

}
