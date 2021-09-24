/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:32:43 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/25 02:38:18 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(int (*board)[10], int _x, int _y)
{
	int	x;
	int	y;
	int	a;
	int	b;

	a = _y - _x;
	b = _y + _x;
	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			if (x == _x || y == _y
				|| y == x + a || y == -x + b)
				if (board[y][x])
					return (1);
			y++;
		}
		x++;
	}
	return (0);
}

void	print(int (*board)[10])
{
	int		y;
	int		col;
	char	tmp;

	y = 0;
	while (y < 10)
	{
		col = 0;
		while (col < 10)
		{
			if (board[y][col])
			{
				tmp = col + '0';
				write(1, &tmp, 1);
				break ;
			}
			col++;
		}
		y++;
	}
	write(1, "\n", 1);
}

int	find(int (*board)[10], int x, int *sol)
{
	int	y;

	if (x >= 10)
		return (1);
	y = 0;
	while (y < 10)
	{
		if (!check(board, x, y))
		{
			board[y][x] = 1;
			if (find(board, x + 1, sol))
			{
				*sol += 1;
				print(board);
			}
			board[y][x] = 0;
		}
		y++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	sol;
	int	board[10][10];

	sol = 0;
	find(board, 0, &sol);
	return (sol);
}
