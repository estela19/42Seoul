/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 02:31:00 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/25 01:32:14 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "operator.h"
#include "utility.h"

#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3
#define MOD 4

void	init(long long int (*f[5])(int, int))
{
	f[ADD] = add;
	f[SUB] = sub;
	f[MUL] = mul;
	f[DIV] = div;
	f[MOD] = mod;
}

int	main(int argc, char **argv)
{
	long long int	n1;
	long long int	n2;
	long long int	(*f[5])(int, int);
	 int			op;

	init(f);
	if (argc != 4)
		return (0);
	n1 = parse_int(&argv[1][0]);
	n2 = parse_int(&argv[3][0]);
	op = parse_op(&argv[2][0]);
	if (op == -1)
		print_num(0);
	else if (op == DIV && n2 == 0)
		zero_error("division");
	else if (op == MOD && n2 == 0)
		zero_error("modulo");
	else
	{
		print_num (f[op](n1, n2));
	}
	print("\n");
	return (0);
}
