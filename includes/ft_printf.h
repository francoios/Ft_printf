/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 08:51:27 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 16:56:54 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <libft.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

typedef struct		s_stock
{
	int				writed;
	int				cnt;
	int				c;
}					t_stock;

char				*get_accu(char *opt, int *bol, int i, int b);
int					ft_accu(char *opt);
int					ft_print_accu(int nb);
int					ft_flag_dieze(char *opt);
int					ft_flag_h(char *opt);
int					ft_flag_hh(char *opt);
int					ft_flag_j(char *opt);
int					ft_flag_l(char *opt);
int					ft_flag_ll(char *opt);
int					ft_flag_space(char *opt);
int					ft_flag_z(char *opt);
unsigned char		size_of_int_spe_short(unsigned char nb);
int					mid_putwstr(char *opt, int c);
void				print_wstr1(int *b, int *nb, wchar_t *str, char *opt);
void				print_wstr2(int *b, int *nb, wchar_t *str, char *opt);
int					ft_isnotype(char c, char *opt);
int					is_flag(char c);
int					is_opt(char c);
char				*get_opt(char *str, t_stock **a);
int					ft_istype(char *str, va_list ap, t_stock *a);
int					ft_istype_c(va_list ap, char *opt);
char				*get_mask(int nb);
char				*fill_mask(char *str, char *str2);
int					get_nb(char *str);
int					ft_wstrlen(wchar_t *str);
int					ft_istype_cup(unsigned int b, char *opt);
char				*ft_get_str_d(intmax_t c, char *opt);
void				ft_moins(char *opt, char *str, int *d, int *b);
void				ft_print_hub(intmax_t c, char *opt);
int					ft_istype_d(intmax_t c, char *opt);
int					istype_hub_c(char *opt, va_list ap);
int					istype_hub_x(char *opt, va_list ap);
int					istype_hub_xup(char *opt, va_list ap);
int					istype_hub_u(char *opt, va_list ap);
int					istype_hub_o(char *opt, va_list ap);
int					istype_hub_d(char *opt, va_list ap);
int					istype_hub_s(char *opt, va_list ap);
int					istype_hub_split(char *opt, va_list ap);
int					istype_hub_split2(char *opt, va_list ap);
int					ft_istype_i(intmax_t c, char *opt);
void				ft_print_o(uintmax_t c, char *opt);
char				*ft_istype_o_split(uintmax_t c, char *opt);
int					ft_istype_o(uintmax_t c, char *opt);
void				dieze_oup(char *opt, unsigned long c, int *b, int *d);
int					ft_istype_oup(va_list ap, char *opt);
int					ft_accu_spe(void);
int					ft_istype_p(uintmax_t c, char *opt);
int					ft_istype_percent(char *opt);
void				ft_putnstr(char *str, int b);
int					ft_accu_neg_s(char *opt, int i);
void				print_s(char *str, int c, char *opt);
int					ft_istype_s(char *str, char *opt);
int					ft_istype_u(uintmax_t c, char *opt);
int					ft_istype_uup(va_list ap);
void				print_x(uintmax_t c, char *opt);
char				*get_str_x(char *opt, uintmax_t c);
int					ft_istype_x(uintmax_t c, char *opt);
char				*get_str_xup(char *opt, uintmax_t c);
void				print_xup(uintmax_t c, char *opt);
int					ft_istype_xup(uintmax_t c, char *opt);
int					ft_lenght(char *opt);
int					ft_opt_dieze(char *opt);
int					ft_opt_hub2(char *opt, intmax_t d);
void				mid_opt_hub_8(char *opt, intmax_t c, int *b);
int					ft_opt_hub8(char *opt, int d, intmax_t c, int i);
int					ft_opt_hub200(char *opt, int d, intmax_t c, int i);
int					ft_opt_hub3(char *opt, int d);
int					ft_opt_hub4(char *opt, int d);
int					ft_opt_hub12(char *opt, int d, unsigned long long int c,
	char *str);
int					ft_opt_hub5(char *opt, int d, unsigned long long int c);
int					ft_opt_hub120(char *opt, int d, unsigned long long int c);
int					ft_opt_hub30(char *opt, int d, unsigned long long int c);
int					ft_opt_moins(char *opt);
int					ft_opt_plus(char *opt);
int					ft_opt_space(char *opt);
int					ft_flag_zero(char *opt);
int					ft_putchar_exept(char c);
int					ft_printf(char *str, ...);
int					ft_atoi_base(char *str, int base);
void				ft_putnbr_base_spe(uintmax_t nb, char *base);
void				ft_putnbr_base_spe_short(unsigned char nb, char *base);
void				ft_putnbr_spe(intmax_t n);
void				ft_putnbr_spe_shart(signed char n);
void				ft_putnbr_spe_spe(unsigned long long int n);
void				ft_putnbr_spe_short(unsigned char n);
int					str_null(void);
int					countwchar(unsigned int b);
void				ft_putwchar(int nb, int *tab);
int					ft_putwstr(wchar_t *str, char *opt);
void				o_tochar(uintmax_t nb, char *base, char **str, int *i);
void				o_tochar_spe(unsigned char nb, char *base, char **str,
	int *i);
void				o_tochar_spe_char(char nb, char *base, char **str, int *i);
void				o_tochar_spe_int(intmax_t nb, char *base, char **str,
	int *i);
int					size_of_int(intmax_t nb);
int					size_of_int_neg(long long nb);
char				size_of_int_short(char nb);
char				size_of_int_neg_short(char nb);
int					size_of_int_spe(uintmax_t nb);
#endif
