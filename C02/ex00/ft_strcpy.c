/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:23:27 by estela19          #+#    #+#             */
/*   Updated: 2021/09/12 16:01:36 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*isrc;
	char	*idest;

	isrc = src;
	idest = dest;
	while (*isrc != '\0')
	{
		*idest = *isrc;
		isrc++;
		idest++;
	}
	*idest = '\0';
	return (dest);
}
