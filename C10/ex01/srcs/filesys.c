/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filesys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:40:09 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/20 18:54:37 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filesys.h"
#include "cat.h"

//return fd
int	open_file(char *path, int option)
{
	if (option == READ)
		return (open(path, O_RDONLY));
	else if (option == APPEND)
		return (open(path, O_APPEND));
	else if (option == OVERWRITE)
		return (open(path, O_WRONLY | O_CREAT, 0644));
	else
		return (INVALID);
}

int	read_file(int fd)
{
	return (read(fd, g_buf[fd], SIZE));
}

//maybe buff clean
int	write_file(int fd)
{
	int	i;

	i = 0;
	while (g_buf[i] != '\0')
	{
		write(1, &g_buf[fd][i], 1);
		i++;
	}
}

int	close_file(int fd)
{
	return (close(fd));
}
