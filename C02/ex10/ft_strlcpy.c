/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:19:24 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/13 15:28:04 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*tmp;

	tmp = dest;
	while (size > 1)
	{
		*dest = *src;
		if (*src != '\0')
			src++;
		dest++;
		size--;
	}
	*dest = '\0';
	return (tmp);
}
