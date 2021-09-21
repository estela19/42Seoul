/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:27:06 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/21 15:27:25 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"
#include "utility.h"

void	fflush(int fnum, char *path)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < fnum)
	{
		j = 0;
		len = 0;
		while (g_buf[i][j] != '\0')
		{
			j++;
			len++;
		}
		if (fnum == 1)
		{
			print("==> ");
			print(path);
			print(" <==\n");
		}
		print(&g_buf[i][len - g_pbyte - 1]);
		i++;
	}
}

void	print(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	print_error(char *path)
{
	print ("ft_tail: ");
	print (path);
	print (": ");
	print (strerror(errno));
	print ("\n");
}

void	set_buf(char (*buf)[SIZE])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < MAX_FILE)
	{
		while (j < SIZE)
		{
			g_buf[i][j] = 0;
			j++;
		}
		i++;
	}
}