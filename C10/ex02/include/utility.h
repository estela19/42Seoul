/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:31:21 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/21 21:50:37 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITY_H
# define UTILITY_H

# include<string.h>
# include<sys/errno.h>
# include<unistd.h>

# define SIZE 10000
# define MAX_FILE 3000
# define COMMAND 1

void	print(char *str);
void	noexist_error(char *path);
void	invalidbyte_error(char *str);
int	ft_strlen(char *str);

#endif