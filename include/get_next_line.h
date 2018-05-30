/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <rfibigr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 17:12:43 by rfibigr           #+#    #+#             */
/*   Updated: 2018/05/17 09:51:02 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 100
# define OPEN_MAX _SC_OPEN_MAX  // Pour compilation sur linux
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

typedef struct	s_struct
{
	char		str[BUFF_SIZE + 1];
	int			len;
}				t_struct;

int				get_next_line(const int fd, char **line);
int				ft_strcut(char **line, int linelen, char *str, int *strlen);
int				ft_read_to_space(int fd, char **buff);
char			*ft_memcat(char *buff, size_t bufflen, char *sread, size_t rd);

#endif
