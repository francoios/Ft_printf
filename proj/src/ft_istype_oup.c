/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_oup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 15:05:51 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 15:56:07 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void		dieze_oup(char *opt, unsigned long c, int *b, int *d)
{
	if (ft_flag_dieze(opt) == 1 && c > 0)
	{
		(*b)++;
		(*d)--;
		ft_putchar('0');
	}
	ft_putnbr_base_spe(c, "01234567");
}

int			ft_istype_oup(va_list ap, char *opt)
{
	long long		c;
	int				b;
	int				d;
	int				i;
	char			*str;

	b = 0;
	i = 0;
	str = ft_strdup("");
	c = va_arg(ap, unsigned long);
	o_tochar(c, "01234567", &str, 0);
	if (ft_accu(opt) > 0)
		i = ft_accu(opt) - (ft_strlen(str) +
		((ft_flag_dieze(opt) == 1 && c != 0) ? 1 : 0));
	d = ft_lenght(opt) - ((i > 0) ? (i + ft_strlen(str)) : ft_strlen(str));
	if (ft_accu(opt) == -9876 && ft_flag_dieze(opt) == 0)
		return (0);
	b += ft_opt_hub5(opt, d, c);
	b += ft_print_accu(i) + ft_strlen(str);
	dieze_oup(opt, c, &b, &d);
	b += ft_opt_hub4(opt, d);
	return (b);
}
