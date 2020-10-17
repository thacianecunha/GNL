/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcunha </var/mail/tcunha>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 10:19:50 by tcunha            #+#    #+#             */
/*   Updated: 2020/10/02 10:19:52 by tcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# define MAX_FD 4096

int		get_next_line(int fd, char **line);
char	*ft_strncpy(char *dst, char *src, size_t len);
char	*ft_strdup(char *s1);
int		is_nl(char *s);
size_t	line_len(char *str);
size_t	buff_len(char *str);

#endif
