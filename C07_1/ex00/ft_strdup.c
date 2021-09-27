/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:48:51 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/17 02:02:53 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

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
