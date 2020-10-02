#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

int       get_next_line(int fd, char **line);
char      *ft_strncpy(char *dst, char *src, size_t len);
char      *ft_strdup(char *s1);
int       is_nl(char *s);
size_t    line_len(char *str);
size_t    buff_len(char *str);

#endif
