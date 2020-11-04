#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	size_t	content_size;
	struct	s_list	*next;
}			t_list;

void ft_bzero(void *b, size_t len);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void        *ft_memset(void *b, int c, size_t len);
void    ft_putchar_fd(char c, int fd);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);

char                *ft_strrev(char *str);
char    *ft_strnstr(const char *fstr, const char *nstr, size_t len);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);

size_t  ft_strlen(const char *str);
size_t  ft_strlcat(char *dst, const char *src, size_t len);
size_t  ft_strlcpy(char *dest, const char *src, size_t len);

int ft_memcmp(const void *str1, const void *str2, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
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
