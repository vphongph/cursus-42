/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphongph <vphongph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:26:35 by vphongph          #+#    #+#             */
/*   Updated: 2019/01/19 05:59:08 by vphongph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define RED		"\e[38;2;255;0;0m"
# define DARKPINK	"\e[38;2;252;19;104m"
# define PINK		"\e[38;2;253;155;203m"
# define BLUE		"\e[38;2;57;154;250m"
# define GREEN		"\e[38;2;175;215;44m"
# define YELLOW		"\e[38;2;243;197;80m"
# define ALLIANCE	"\e[38;2;51;196;127m"
# define FEDERATION	"\e[38;2;65;128;219m"
# define ASSEMBLY	"\e[38;2;160;97;209m"
# define ORDER		"\e[38;2;255;105;80m"
# define RESET		"\e[0m"
# include <string.h>

typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef	struct	s_dlist
{
	struct s_dlist	*prev;
	struct s_dlist	*next;
	void			*content;
	size_t			content_size;
}				t_dlist;

typedef struct	s_512speed
{
	char		ram[512];
}				t_512speed;

typedef struct	s_64speed
{
	char		ram[64];
}				t_64speed;

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s1);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *haystack, const char *needle,
				size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
size_t			ft_countword(char const *s, char c, size_t *maxlen);
size_t			ft_revint(int n, int *nzero);
int				ft_lstaddend(t_list **alst, void *content, size_t content_size);
void			ft_lstfree(t_list **alst);
void			ft_printbit(unsigned char c);
char			*ft_strjoinfree(char *s1, char *s2, char c);
char			*ft_strrev(char *str);
int				ft_printtab(char **tab);
void			*ft_memdup(void *s, size_t n);
void			*ft_memjoin(void *s1, void *s2, size_t l, size_t n);
void			*ft_memjoinfree_l(void *s1, void *s2, size_t l, size_t n);
void			*ft_memjoinfree_r(void *s1, void *s2, size_t l, size_t n);
void			*ft_memjoinfree_b(void *s1, void *s2, size_t l, size_t n);
void			*ft_memcpy_v2(void *dst, void *src, size_t n);
int				ft_strlen_v2(char *s);
int				ft_putstr_fd_v2(char *s, int fd);
int				ft_putstr_v2(char *s);
void			ft_bzero_v2(void *s, size_t n);
char			*ft_strsub_v2(char *s, unsigned int start, size_t len);
t_dlist			*ft_dlstnew(void *content, size_t content_size);
int				ft_dlstdelone(t_dlist **top, void (*del)(void *, size_t));
int				ft_dlstadd(t_dlist **top, t_dlist *new);
int				get_next_line(const int fd, char **line);

#endif
