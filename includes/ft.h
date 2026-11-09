#ifndef FT_H
# define FT_H

# include <stddef.h>

size_t ft_strlen(char *s);

typedef struct s_list
{
    void *content;
    struct s_list *next;
}       t_list;

#endif