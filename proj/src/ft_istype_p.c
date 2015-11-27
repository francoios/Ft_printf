/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:31:16 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 16:26:55 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
#include <stdio.h>

int				ft_accu_spe(void)
{
	ft_putstr("0x");
	return (2);
}

int				ft_istype_p(uintmax_t c, char *opt)
{
	char			*s;
	int				i;
	int				b;
	int				d;

	b = 0;
	i = 0;
	s = ft_strdup("");
	o_tochar(c, "0123456789abcdef", &s, &i);
	if (ft_accu(opt) > 0)
		i = ft_accu(opt) - (ft_strlen(s));
	d = ft_lenght(opt) - ((i > 0) ? (i + ft_strlen(s) + 2) : ft_strlen(s) + 2);
	if (ft_accu(opt) == -9876)
		return (ft_accu_spe());
	if (ft_flag_zero(opt) == 1)
		ft_putstr("0x");
	b = ft_opt_hub30(opt, d, c);
	if (ft_flag_zero(opt) == 0)
		ft_putstr("0x");
	b += ft_print_accu(i) + ft_strlen(s) + 2;
	ft_putnbr_base_spe(c, "0123456789abcdef");
	b += ft_opt_hub4(opt, d);
	return (b);
}
