/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:24:07 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/16 15:33:01 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	if (min >= max)
		arr = '\0';
	else
	{
		len = max - min;
		arr = (int *)malloc((len + 1) * sizeof(int));
		i = min;
		while (i < max)
		{
			arr[i] = i;
			i++;
		}
		arr[i] = '\0';
	}
	return (arr);
}
