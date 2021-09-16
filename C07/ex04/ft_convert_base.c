/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:47:35 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/17 02:06:59 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	g_check[300][2];
int	g_buff[100];
int	g_blen;

int	is_valid(char *base, int set)
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
			g_check[i++][set] = -1;
		while (*base != '\0')
		{
			if (*base == '+' || *base == '-' || *base == ' ')
				return (0);
			if (g_check[(int)*base][set] != -1)
				return (0);
			g_check[(int)*base][set] = idx++;
			base++;
		}
		g_blen = idx;
		return (1);
	}
}

char	*buf2arr(int nlen, char *buff, int minus)
{
	 int	i;
	char	*num;

	i = nlen;
	num = (char *)malloc(nlen);
	if (minus)
	{
		nlen += 1;
		num[0] = '-';
	}
	while (--i >= 0)
		num[nlen - i - 1] = buff[i];
	num[nlen] = '\0';
	return (num);
}

char	*num2base(int nbr, char *base, int minus)
{
	 int	i;
	 int	len;
	char	buff[10000];
	char	*tmp;

	i = 0;
	len = 0;
	tmp = base;
	while (*tmp++ != '\0')
		len++;
	if (nbr == 0)
	{
		buff[i++] = base[0];
		minus = 0;
	}
	while (nbr > 0)
	{
		buff[i++] = base[nbr % len];
		nbr /= len;
	}
	return (buf2arr(i, buff, minus));
}

//return mcnt
int	base2num(char *str, int *mcnt)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = -1;
	while (*str == '+' || *str == '-' || *str == ' ' || *str == '\t')
	{
		if (*str == '-')
			(*mcnt)++;
		str++;
	}
	while (*str != '\0' && g_check[(int)(*str)][0] != -1)
	{
		tmp = 0;
		g_buff[i++] = g_check[(int)(*str)][0];
		str++;
	}
	i = 0;
	while (g_buff[i] != -1)
	{
		tmp *= g_blen;
		tmp += g_buff[i++];
	}
	return (tmp);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	 int	i;
	 int	num;
	 int	mcnt;
	char	*res;

	i = 0;
	mcnt = 0;
	while (i < 100)
		g_buff[i++] = -1;
	if (!is_valid(base_to, 1) || !is_valid(base_from, 0))
		return (0);
	num = base2num(nbr, &mcnt);
	if (num == -1)
		return (0);
	if (mcnt % 2)
		mcnt = 1;
	else
		mcnt = 0;
	res = num2base(num, base_to, mcnt);
	return (res);
}
