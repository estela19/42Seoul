/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 23:16:59 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/25 02:13:35 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>
#include<sys/errno.h>
#include<fcntl.h>

#define SIZE 10000
#define MAX_FILE 3000

char	g_buf[MAX_FILE][SIZE];

void	fflush(int fnum)
{
	int	i;
	int	j;

	i = 0;
	while (i < fnum)
	{
		j = 0;
		while (g_buf[i][j] != '\0')
		{
			write(1, &g_buf[i][j], 1);
			j++;
		}
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
	print ("ft_cat: ");
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

int	main(int argc, char **argv)
{
	int	i;
	int	fd;

	i = 0;
	set_buf(g_buf);
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			print_error(argv[i]);
			return (0);
		}
		if (read(fd, g_buf[i], SIZE) == -1)
			print_error(argv[i]);
		if (close(fd) == -1)
			print_error(argv[i]);
	}
	fflush(argc);
	return (0);
}
