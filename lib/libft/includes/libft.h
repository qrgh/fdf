/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:13:15 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:13:20 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdint.h>
# include <string.h>
# include "struct.h"

# define ISLOWER(c) (c >= 'a' && c <= 'z')
# define ISUPPER(c) (c >= 'A' && c <= 'Z')
# define ISDIGIT(c) (c >= '0' && c <= '9')
# define ISALPHA(c) (ISLOWER(c) || ISUPPER(c))
# define SPECIAL_SPACE (c == '\v' || c == '\f' || c == '\r')
# define BUFF_SIZE 512
# define HEX "0123456789abcdef"
# define OCT "012345678"
# define EPSILON 0.000001
# define RAND_SIZE 624
# define RAND_A 397
# define MAX_RAND 5

char	*ft_strnew(size_t size);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char*));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strgetnext(char ***str);
char	*ft_strmap(const char *s, char (*f)(char));
int		ft_strnequ(const char *s1, const char *s2, size_t n);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
size_t	ft_strlen(const char *s);
size_t	ft_strnlen(const char *s, size_t maxlen);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
int		ft_strequ(const char *s1, const char *s2);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strsub(const char *s, unsigned int start, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strjoin_char(const char *s1, char c, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_substr(const char *src, size_t pos, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strtrim(const char *s);
void	ft_strdel(char **as);
char	**ft_strsplit(const char *s, char c);

char	*ft_tabjoin(char **tab);
void	ft_tabdel(char ***tab);
int		ft_tablen(char **tab);

int		ft_matchn(const char *str, const char *match);
int		ft_match(const char *str, const char *match);
size_t	ft_matchlen(const char *str, const char *match);
char	**ft_matchsplit(const char *str, const char *match);
char	**ft_matchpop(char *str, const char *match);

int		ft_push(int const fd, char **buf, char **line);
int		ft_read(int const fd, char **buf, char **line);
int		get_next_line(int const fd, char **line);

void	ft_putnbr(int n);
void	ft_putendl(const char *s);
void	ft_putstr(const char *s);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_puthex(unsigned long l);
void	ft_puthex_64(uint64_t l);
void	ft_putbase(long l, int base, char *letters);

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);

int		ft_numlen(int n);
int		ft_atoi(const char *str);
float	ft_atof(const char *str);
char	*ft_itoa(int n);
double	ft_pow(double x, double y);
int		ft_abs(int i);
double	ft_absl(double i);
double	ft_sqrt(double x);

void	**ft_isort(void **tab, size_t size, int (*cmp)(void*, void*));
void	ft_qsort(void **tab, size_t size, int (*cmp)(void*, void*));

float	ft_frand(void);
int		ft_rrand(int start, int end);
int		ft_rand(void);
int		ft_randreset(void);
int		*ft_getrand_array(void);
int		ft_randinit(int seed);

t_list	*ft_lst(void *content, size_t content_size);
t_list	*ft_lstnew(void const *content, size_t content_size);
t_list	*ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstinsert(t_list **lst, t_list *new, int (*cmpf)(void*, void*));
void	*ft_lstcmp(t_list *lst, void *content, int (*cmpf)(void*, void*));

void	ft_memdel(void **ap);
void	*ft_memalloc(size_t size);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

#endif
