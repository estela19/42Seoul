/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:32:55 by estela19          #+#    #+#             */
/*   Updated: 2021/09/12 16:04:33 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*tmp;

	tmp = dest;
	while (n)
	{
		*dest = *src;
		if (*src != '\0')
			src++;
		dest++;
		n--;
	}
	return (tmp);
}
