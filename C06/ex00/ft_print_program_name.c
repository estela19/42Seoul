/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 01:30:50 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/16 03:02:40 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	argc = 0;
	while (argv[0][argc] != '\0')
	{
		write(1, &argv[0][argc], 1);
		argc++;
	}
	write(1, "\n", 1);
	return (0);
}
