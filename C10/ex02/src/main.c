/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:12:27 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/21 22:14:48 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"
#include "parse.h"

int		g_pbyte;
char	g_buf[MAX_FILE][SIZE];

int	main(int argc, char **argv)
{
	int	i;
	int	idx;
	int	fnum;
	int	opnum;

	i = 0;
	idx = 0;
	fnum = argc - 1;
	if (argv[COMMAND][0] == '-')
	{
		if (parseoption(argv, &opnum) == -1)
			return (0);
		fnum -= opnum;
		i += opnum;
	}
	while (++i < argc)
	{
		run(argv[i], fnum, idx++);
	}
	return (0);
}
