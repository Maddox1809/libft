#ifndef LIBFT_H
#define LIBFT_H

void	ft_bzero(void *s, int n);
int		ft_isalnum(int arg);
int		ft_isalpha(int c);
int		ft_isascii(int arg);
int		ft_isdigit(int arg);
int		ft_isprint(int arg);
char	*ft_memcpy(void *dest, const void *src, int num);
void	*ft_memmove(void *dest, const char *src, int len);
void	ft_memset(void *ptr, int value, int num);
int		ft_strlcpy(char *dest, const char *src, int size);
int		ft_strlen(char *str);
void	*ft_memchr(const void *s, int c, int n);
int		ft_memcmp(const void *s1, const void s2*, int n);

#endif
