/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:45:58 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/25 14:08:57 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	addsep(char *tar, char *sep)
{
	int	i;

	i = 0;
	while (*sep != '\0')
	{
		*tar++ = *sep++;
		i++;
	}
	return (i);
}

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	 int	i;
	 int	j;
	 int	len;
	char	*arr;

	len = 0;
	i = 0;
	arr = 0;
	arr = (char *)malloc(100000000);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			arr[len] = strs[i][j];
			len++;
			j++;
		}
		i++;
		if (i < size)
		{
			len += addsep(&arr[len], sep);
		}
	}
	arr[len] = '\0';
	return (arr);
}
