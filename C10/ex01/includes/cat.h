/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:27:29 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/20 17:39:24 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# define SIZE 10000
# define MAX_FILE 3000

# define INVALID -2

# define READ 0
# define APPEND 1
# define OVERWRITE 2

char	g_buf[MAX_FILE][SIZE];
char	*g_err;
 int	g_targetfd;

#endif
