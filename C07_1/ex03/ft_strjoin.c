/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:15:49 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/27 16:23:53 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*sortfunc(char *sep, char **strs, int size)
{
	char		*arr;
	long long	len1;
	long long	len2;
	long long	cnt[2];

	cnt[0] = 0;
	len2 = 0;
	len1 = 0;
	while (cnt[0]++ < size)
	{
		cnt[1] = 0;
		while (strs[cnt[0] - 1][cnt[1]] != '\0')
		{
			len2++;
			cnt[1]++;
		}
	}
	cnt[0] = 0;
	while (*sep != '\0')
	{
		len1++;
		sep++;
	}
	arr = (char *)malloc((len1 * (size - 1) + len2 + 1) * sizeof(char));
	return (arr);
}

void	ft_strcat(char *dest, char *src, char *sep)
{
	while (*dest != '\0')
		(dest)++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		(dest)++;
	}
	while (*sep != '\0')
	{
		*dest = *sep;
		sep++;
		(dest)++;
	}
	*dest = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	char	*tmp;
	int		cnt;

	if (size == 0)
	{
		arr = (char *)malloc(1);
		arr[0] = '\0';
		return (arr);
	}
	arr = sortfunc(sep, strs, size);
	tmp = arr;
	tmp[0] = 0;
	cnt = 0;
	while (cnt < size - 1)
		ft_strcat(tmp, strs[cnt++], sep);
	ft_strcat(tmp, strs[cnt], "");
	return (arr);
}
