/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:18:30 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/21 21:17:37 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include<fcntl.h>
# include<unistd.h>

# define SIZE 10000
# define MAX_FILE 3000
# define COMMAND 1

extern int	g_pbyte;
extern char	g_buf[MAX_FILE][SIZE];

int	parseint(char *inp);
int	parsebyte(char *arg);
int	parseoption(char **argv, int *opnum);
void	run(char *file, int fnum, int idx);
void	fflush(int fnum, char *path, int i);

#endif