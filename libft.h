#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	size_t	conten_size;
	struct	s_list	*next;
}			t_list;

void ft_bzero(void *b, size_t len);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void        *ft_memset(void *b, int c, size_t len);
void    ft_putchar_fd(char c, int fd);

char                *ft_strrev(char *str);
char    *ft_strnstr(const char *fstr, const char *nstr, size_t len);

size_t  ft_strlen(const char *str);
int ft_memcmp(const void *str1, const void *str2, size_t n);
int ft_strncmp(char *s1, char *s2, unsigned int n);
int ft_atoi(char *str);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_ischar (char a, char b);
int ft_islower(int a);
int ft_isprint(int c);
int ft_isspace(int a);
int ft_isupper(int a);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
