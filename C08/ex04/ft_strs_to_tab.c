/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 22:57:09 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/18 00:12:54 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	 int	i;
	 int	len;
	char	*arr;

	i = 0;
	len = ft_strlen(src);
	arr = (char *)malloc(len + 1);
	while (i <= len)
	{
		arr[i] = src[i];
		i++;
	}
	return (arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	        int	i;
	t_stock_str	*sen;

	i = 0;
	sen = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (sen == '\0')
		return (0);
	while (i < ac)
	{
		sen[i].size = ft_strlen(av[i]);
		sen[i].str = av[i];
		sen[i].copy = ft_strdup(av[i]);
		i++;
	}
	sen[i].str = 0;
	return (sen);
}
