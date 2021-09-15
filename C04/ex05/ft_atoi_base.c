/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:35:03 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/15 23:41:26 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_check[300];
int	g_buff[100];
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
	else if (a == '+' || a == '-' || a == ' ' )
		return (0);
	else if (a == '\t' || a == '\n' || a == '\v' || a == '\f' || a == '\r')
		return (0);
	else
		return (2);
}

int	convert(void)
{
	int	i;
	int	tmp;

	tmp = 0;
	i = 0;
	while (g_buff[i] != -1)
	{
		tmp *= g_blen;
		tmp += g_buff[i];
		i++;
	}
	return (tmp);
}

void	base2num(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (check_num(*str))
		{
			g_buff[i] = g_check[(int)*str];
			i++;
		}	
		else
			break ;
		str++;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	mcnt;
	int	num;

	i = 0;
	while (i < 100)
		g_buff[i++] = -1;
	mcnt = 0;
	if (!is_valid(base))
		return (0);
	while (!check_num(*str))
	{
		if (*str == '-')
			mcnt++;
		str++;
	}
	base2num(str);
	num = convert();
	if (mcnt % 2)
		num *= -1;
	return (num);
}
