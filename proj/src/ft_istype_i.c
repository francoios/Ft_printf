/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:31:36 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 15:43:05 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
#include <stdio.h>

int			ft_istype_i(intmax_t c, char *opt)
{
	char	*str;
	int		b;
	int		d;
	int		i;

	b = 0;
	i = 0;
	str = ft_strdup("");
	o_tochar_spe_int(c, "0123456789", &str, &i);
	i += ft_strlen(str);
	d = ft_lenght(opt) - i - ((ft_opt_plus(opt) == 1) ? 1 : 0);
	if (ft_accu(opt) == -9876)
		return (0);
	if (ft_accu(opt) > 0)
		d -= (ft_accu(opt) - i);
	b += ft_opt_hub8(opt, d, c, i);
	if (ft_flag_space(opt) == 1 && ft_accu(opt) <= 0 && ft_lenght(opt) == 0 &&
	ft_opt_plus(opt) == 0 && c >= 0)
	{
		ft_putchar(' ');
		b++;
	}
	ft_putstr(str);
	b += ft_opt_hub2(opt, d) + i;
	return (b);
}
