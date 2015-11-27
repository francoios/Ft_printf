/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:32:03 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 15:49:59 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void		ft_print_o(uintmax_t c, char *opt)
{
	if (ft_flag_hh(opt) == 1)
		ft_putnbr_base_spe_short(c, "01234567");
	else
		ft_putnbr_base_spe(c, "01234567");
}

char		*ft_istype_o_split(uintmax_t c, char *opt)
{
	char	*str;

	str = ft_strdup("");
	if (ft_flag_hh(opt) == 1)
		o_tochar_spe(c, "01234567", &str, 0);
	else
		o_tochar(c, "01234567", &str, 0);
	return (str);
}

int			ft_istype_o(uintmax_t c, char *opt)
{
	char			*str;
	int				i;
	int				b;
	int				d;

	b = 0;
	i = 0;
	str = ft_istype_o_split(c, opt);
	if (ft_accu(opt) > 0)
		i = ft_accu(opt) - (ft_strlen(str) +
		((ft_flag_dieze(opt) == 1 && c != 0) ? 1 : 0));
	d = ft_lenght(opt) - ((i > 0) ? (i + ft_strlen(str)) : ft_strlen(str));
	if (ft_accu(opt) == -9876 && ft_flag_dieze(opt) == 0)
		return (0);
	b += ft_opt_hub5(opt, d, c);
	b += ft_print_accu(i) + ft_strlen(str);
	if (ft_flag_dieze(opt) == 1 && c != 0)
	{
		b++;
		ft_putchar('0');
	}
	ft_print_o(c, opt);
	b += ft_opt_hub4(opt, d);
	return (b);
}
