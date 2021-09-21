/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:27:06 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/21 22:06:46 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	print(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	noexist_error(char *path)
{
	print ("tail: cannot open '");
	print (path);
	print ("' for reading: ");
	print (strerror(errno));
	print ("\n");
}

void	invalidbyte_error(char *str)
{
	print ("tail: invalid number of bytes: '");
	print (str);
	print ("'\n");
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != '\0')
	{
		len++;
	}
	return (len);
}
