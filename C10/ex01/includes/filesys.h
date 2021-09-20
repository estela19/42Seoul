/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filesys.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:52:00 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/20 18:54:26 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILESYS_H
# define FILESYS_H

# include<unistd.h>
# include<fcntl.h>

int	open_file(char *path, int option);
int	read_file(int fd);
int	write_file(int fd);
int	close_file(int fd);

#endif