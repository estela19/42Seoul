/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:45:58 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/17 02:29:35 by sooykim          ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	 int	i;
	 int	j;
	 int	len;
	char	*arr;

	len = 0;
	i = 0;
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
	return (arr);
}
