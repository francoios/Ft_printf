/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:32:17 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 16:43:42 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void		print_x(uintmax_t c, char *opt)
{
	if (ft_flag_hh(opt) == 1)
		ft_putnbr_base_spe_short(c, "0123456789abcdef");
	else
		ft_putnbr_base_spe(c, "0123456789abcdef");
}

char		*get_str_x(char *opt, uintmax_t c)
{
	char *str;

	str = ft_strdup("");
	if (ft_flag_hh(opt) == 1)
		o_tochar_spe(c, "0123456789abcdef", &str, 0);
	else
		o_tochar(c, "0123456789abcdef", &str, 0);
	return (str);
}

int			ft_istype_x(uintmax_t c, char *opt)
{
	char			*str;
	int				i;
	int				b;
	int				d;

	i = 0;
	b = 0;
	str = get_str_x(opt, c);
	if (ft_accu(opt) > 0)
		i = ft_accu(opt) - ft_strlen(str);
	d = ft_lenght(opt) - ((i > 0) ? (i + ft_strlen(str)) : ft_strlen(str));
	if (ft_accu(opt) == -9876 && ft_flag_dieze(opt) == 0)
		return (0);
	if (ft_accu(opt) == -9876 && ft_flag_dieze(opt) == 1 && c == 0)
		return (0);
	b += ft_opt_hub120(opt, d, c);
	if (ft_flag_dieze(opt) == 1 && c != 0)
	{
		b += 2;
		ft_putstr("0x");
	}
	b += ft_print_accu(i) + ft_strlen(str);
	print_x(c, opt);
	b += ft_opt_hub4(opt, d);
	return (b);
}
