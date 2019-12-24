/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftprintf.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:02:45 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/12 15:14:53 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int			ft_printf(const char *fmt, ...);
void		ft_putchar(char c);
int			check_conversion(va_list args, const char *fmt, int *nb_print);
int			conversion_char(va_list args, char *fmt, int width);
int			conversion_string(va_list args, char *fmt, int width, int preci);
int			width_nb_flag(va_list args, char *fmt, int *len_flag);
int			preci_nb_flag(va_list args, char *fmt, int *len_flag);
int			is_flag(char *str);
int			ft_isdigit(int c);
int			ft_atoi(char *str, int *len_flag);
void		ft_putstr(char *str);
int			ft_strlen(const char *s);
void		print_char(char c, int width, char sign);
void		print_string(char *s, int width, char sign);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		sign_flag(int width, char c);
int			ft_abs(int n);
int			conversion_d(va_list args, char *fmt, int width, int preci);
void		ft_putnbr(int nb);
char		*ft_itoa(int n);
int			ft_max(int arr[], int n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
char		*ft_strdup(const char *s1);
char		*ft_strjoin(char const *s1, char const *s2);
void		print_d(char *s, int width, char sign);
int			zero_to_nb(char **nb, int nb_zero);
void		ft_zero(char **s, int n);
int			conversion_u(va_list args, char *fmt, int width, int preci);
char		*ft_itoa_u(unsigned int n);
char		*ft_itoa_long(long n);
int			conversion_p(va_list args, char *fmt, int width, int preci);
int			conversion_x_u(va_list args, char *fmt, int width, int preci);
int			conversion_x_l(va_list args, char *fmt, int width, int preci);
int			conversion_perc(char *fmt, int width);
char		*to_hexa(unsigned long n, int cas);
char		*ft_strrev(char *str);
int			ft_free(char **s, int a);
int			len_nbr(int nb);

#endif
