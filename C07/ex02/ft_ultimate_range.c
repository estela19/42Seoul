/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:34:20 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/16 17:45:28 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	if (min >= max)
	{
		return (0);
	}
	len = max - min;
	arr = (int *)malloc(len * sizeof(int));
	if (arr == '\0')
		return (-1);
	i = min;
	while (i < max)
	{
		arr[i] = i;
		i++;
	}
	arr[i] = '\0';
	*range = arr;
	return (len);
}
