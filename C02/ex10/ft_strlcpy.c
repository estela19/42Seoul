/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:19:24 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/15 00:55:24 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i++] != '\0')
		;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*tmp;

	tmp = src;
	while (size > 1)
	{
		*dest = *src;
		if (*src != '\0')
			src++;
		dest++;
		size--;
	}
	*dest = '\0';
	return (ft_strlen(tmp) - 1);
}
