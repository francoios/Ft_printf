/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:31:29 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 15:40:50 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char		*ft_get_str_d(intmax_t c, char *opt)
{
	char *str;

	str = ft_strdup("");
	if (ft_flag_hh(opt) == 1)
		o_tochar_spe_char(c, "0123456789", &str, 0);
	else
		o_tochar_spe_int(c, "0123456789", &str, 0);
	return (str);
}

void		ft_moins(char *opt, char *str, int *d, int *b)
{
	if (ft_flag_space(opt) == 1 && str[0] != '-' && ft_opt_plus(opt) != 1)
	{
		ft_putchar(' ');
		(*d)--;
		(*b)--;
	}
}

void		ft_print_hub(intmax_t c, char *opt)
{
	if (ft_flag_hh(opt) == 1)
		ft_putnbr_spe_shart(c);
	else
		ft_putnbr_spe(c);
}

int			ft_istype_d(intmax_t c, char *opt)
{
	char	*s;
	int		b;
	int		d;
	int		i;

	i = 0;
	s = ft_get_str_d(c, opt);
	if (ft_accu(opt) > 0)
		i = ft_accu(opt) - ((s[0] == '-') ? ft_strlen(s) - 1 : ft_strlen(s));
	d = ft_lenght(opt) - ((i > 0) ? (i + ft_strlen(s)) : ft_strlen(s));
	ft_moins(opt, s, &d, &b);
	if (ft_flag_zero(opt) == 1 && s[0] == '-')
		ft_putchar('-');
	b = ft_opt_hub200(opt, d, c, i);
	if (i > 0 && s[0] == '-')
		ft_putchar('-');
	b += ft_print_accu(i) + ft_strlen(s);
	if (ft_flag_zero(opt) == 0 && i <= 0 && s[0] == '-')
		ft_putchar('-');
	if (ft_accu(opt) == -9876)
		return (0);
	ft_print_hub(c, opt);
	b += ft_opt_hub4(opt, d) + ((ft_flag_space(opt) == 1 && s[0] != '-' &&
	ft_opt_plus(opt) != 1) ? 1 : 0);
	return (b);
}
