/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:09:06 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/24 23:24:45 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_check[300];
int	g_blen;

int	is_valid(char *base)
{
	int	i;
	int	idx;

	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	else
	{
		i = 0;
		idx = 0;
		while (i < 300)
			g_check[i++] = -1;
		while (*base != '\0')
		{
			if (*base == '+' || *base == '-' || *base == ' ')
				return (0);
			if (g_check[(int)*base] != -1)
				return (0);
			g_check[(int)*base] = idx++;
			base++;
		}
		g_blen = idx;
		return (1);
	}
}

int	check_num(char a)
{
	if (g_check[(int)a] != -1)
		return (1);
	else if (a == '+' || a == '-')
		return (0);
	else if (a == '\t' || a == '\n' || a == '\v' \
	|| a == '\f' || a == '\r' || a == ' ')
		return (2);
	else
		return (3);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	mcnt;

	num = 0;
	mcnt = 0;
	if (!is_valid(base))
		return (0);
	while (check_num(*str) == 2)
		str++;
	while (check_num(*str) == 0)
	{
		if (*str == '-')
			mcnt++;
		str++;
	}
	while (g_check[(int)*str] != -1)
	{
		num *= g_blen;
		num += g_check[(int)*str];
		str++;
	}
	if (mcnt % 2 == 1)
		num *= -1;
	return (num);
}
