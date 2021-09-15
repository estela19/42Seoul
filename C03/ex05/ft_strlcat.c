/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:26:36 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/15 00:40:19 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

void	ft_strcat(char	*dest, char	*src)
{
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
}

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	len;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	len = dlen + slen;
	if (dlen + slen < size)
	{
		ft_strcat(dest, src);
		return (len);
	}
	else if (dlen + size >= size && dlen < size)
	{
		ft_strncat(dest, src, size - dlen - 1);
		return (len);
	}
	else
	{
		return (slen + size);
	}
}
