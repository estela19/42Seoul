/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 00:08:15 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/25 00:58:37 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITY_H
# define UTILITY_H

# include<unistd.h>

int		check_num(char a);
int		ft_strlen(char *a);
void	print(char *a);
void	zero_error(char *str);
void	print_num(int nb);

#endif