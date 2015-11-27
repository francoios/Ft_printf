/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_xup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 15:05:42 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 16:47:13 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char		*get_str_xup(char *opt, uintmax_t c)
{
	char *str;

	str = ft_strdup("");
	if (ft_flag_hh(opt) == 1)
		o_tochar_spe(c, "0123456789ABCDEF", &str, 0);
	else
		o_tochar(c, "0123456789ABCDEF", &str, 0);
	return (str);
}

void		print_xup(uintmax_t c, char *opt)
{
	if (ft_flag_hh(opt) == 1)
		ft_putnbr_base_spe_short(c, "0123456789ABCDEF");
	else
		ft_putnbr_base_spe(c, "0123456789ABCDEF");
}

int			ft_istype_xup(uintmax_t c, char *opt)
{
	char			*str;
	int				i;
	int				b;
	int				d;

	i = 0;
	str = get_str_xup(opt, c);
	if (ft_accu(opt) > 0)
		i = ft_accu(opt) - (ft_strlen(str) +
		((ft_flag_dieze(opt) == 1 && c != 0) ? 2 : 0));
	d = ft_lenght(opt) - ((i > 0) ? (i + ft_strlen(str)) : ft_strlen(str));
	if (ft_accu(opt) == -9876 && ft_flag_dieze(opt) == 0)
		return (0);
	if (ft_accu(opt) == -9876 && ft_flag_dieze(opt) == 1 && c == 0)
		return (0);
	b = ft_opt_hub5(opt, d, c);
	b += ft_print_accu(i) + ft_strlen(str);
	if (ft_flag_dieze(opt) == 1 && c != 0)
	{
		b += 2;
		ft_putstr("0X");
	}
	print_xup(c, opt);
	b += ft_opt_hub4(opt, d);
	return (b);
}
