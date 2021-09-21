/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:52:40 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/21 22:04:08 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "utility.h"

int	parseint(char *inp)
{
	int	i;
	int	num;
	int	digit;

	i = 0;
	num = 0;
	digit = 0;
	while (inp[i] != '\0')
	{
		digit = inp[i] - '0';
		if (digit > 9 || digit < 0)
			return (-1);
		num *= 10;
		num += digit;
		i++;
	}
	return (num);
}

int	parsebyte(char *arg)
{
	g_pbyte = parseint(arg);
	if (g_pbyte == -1)
	{
		invalidbyte_error(arg);
		return (-1);
	}
	return (0);
}

int	parseoption(char **argv, int *opnum)
{
	if (argv[COMMAND][2] != '\0')
	{
		if (parsebyte(&argv[COMMAND][2]) == -1)
			return (-1);
		*opnum = 1;
	}
	else
	{
		if (parsebyte(argv[COMMAND + 1]) == -1)
			return (-1);
		*opnum = 2;
	}
	return (0);
}

void	run(char *file, int fnum, int idx)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		noexist_error(file);
	}
	else
	{
		read(fd, g_buf[idx], SIZE);
		close(fd);
		fflush(fnum, file, idx);
	}
}

void	fflush(int fnum, char *path, int i)
{
	int	len;

	if (i != 0)
		print("\n");
	if (fnum != 1)
	{
		print("==> ");
		print(path);
		print(" <==\n");
	}
	len = ft_strlen(g_buf[i]);
	if (g_pbyte < len)
		print(&g_buf[i][len - g_pbyte]);
	else
		print(&g_buf[i][0]);
}
