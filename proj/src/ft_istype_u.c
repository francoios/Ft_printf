/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:32:09 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 16:37:35 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_istype_u(uintmax_t c, char *opt)
{
	char	*str;
	int		b;
	int		d;
	int		i;

	str = ft_strdup("");
	b = 0;
	i = 0;
	if (ft_flag_hh(opt) == 1)
		o_tochar_spe(c, "0123456789", &str, &i);
	else
		o_tochar(c, "0123456789", &str, &i);
	if (ft_accu(opt) > 0)
		i = ft_accu(opt) - ft_strlen(str);
	d = ft_lenght(opt) - ((i > 0) ? (i + ft_strlen(str)) : ft_strlen(str));
	if (ft_accu(opt) == -9876)
		return (0);
	b += ft_opt_hub12(opt, d, c, str);
	b += ft_print_accu(i) + ft_strlen(str);
	if (ft_flag_hh(opt) == 1)
		ft_putnbr_spe_short(c);
	else
		ft_putnbr_spe_spe(c);
	b += ft_opt_hub2(opt, d);
	return (b);
}
