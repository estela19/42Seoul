/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:24:07 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/17 02:47:34 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	len;
	int	*arr;

	j = 0;
	if (min >= max)
	{
		arr = '\0';
		return (arr);
	}
	else
	{
		len = max - min;
		arr = (int *)malloc((len + 1) * sizeof(int));
		i = min;
		while (i < max)
		{
			arr[j] = i;
			i++;
			j++;
		}
		arr[j] = '\0';
	}
	return (arr);
}
