/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:34:20 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/17 02:52:50 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	len;
	int	*arr;

	j = 0;
	if (min >= max)
	{
		return (0);
	}
	len = max - min;
	arr = (int *)malloc((len + 1) * sizeof(int));
	if (arr == 0)
		return (-1);
	i = min;
	while (i < max)
	{
		arr[j] = i;
		i++;
		j++;
	}
	arr[j] = '\0';
	*range = arr;
	return (len);
}
