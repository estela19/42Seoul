/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:31:21 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/21 17:15:32 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITY_H
#define UTILITY_H

#include<sys/errno.h>
#include<unistd.h>

void	fflush(int fnum, char *path);
void	print(char *str);
void	print_error(char *path);
void	set_buf(char (*buf)[SIZE]);

#endif