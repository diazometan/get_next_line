/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <lwyl-the@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:28:36 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/12/05 20:05:11 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/includes/libft.h"
# include <fcntl.h>

# define BUFF_SIZE 4
# define CONTENT(x) ((t_info *)(x->content))->str

typedef struct		s_info
{
	int				fd;
	char			*str;
	char			*start;
}					t_info;

int					get_next_line(const int fd, char **line);

#endif
