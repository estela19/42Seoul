/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:37:10 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/20 19:05:23 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<sys/errno.h>
#include "cat.h"

void	print(const char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	print_error(void)
{
	print (strerror(errno));
}

//maybe unused
void	set_buf(char (*buf)[SIZE])
{
	int	i;
	int	j;

	i = 0;
}

int	parsing(int size, char **input)
{
	int	i;
	const char	*ow = ">";
	const char	*plus = ">>";

	i = 1;
	while (i < size)
	{
		if (input[i][0] == '>' && input[i][1] == '>')
		{

		}
		else if (input[i] == '>')
		{

		}
	}	

}
