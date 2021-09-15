/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:34:44 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/14 23:58:32 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	    char		*tmp;
	unsigned int	i;

	i = 0;
	tmp = dest;
	while (*dest != '\0')
		dest++;
	while (i++ < nb)
	{
		*dest = *src;
		if (*src == '\0')
			break ;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}
