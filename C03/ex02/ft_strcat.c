/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:14:22 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/14 21:33:08 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char	*src)
{
	char	*tmp;

	tmp = dest;
	while (*dest != '\0')
		dest++;
	while (1)
	{
		*dest = *src;
		if (*src == '\0')
			break ;
		dest++;
		src++;
	}
	return (tmp);
}
