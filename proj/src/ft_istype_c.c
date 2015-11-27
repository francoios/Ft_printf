/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:32:23 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 15:35:50 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_istype_c(va_list ap, char *opt)
{
	int		i;
	int		b;
	char	c;

	b = ft_lenght(opt) - 1;
	i = ft_opt_hub3(opt, b) + 1;
	c = va_arg(ap, int);
	ft_putchar(c);
	i += ft_opt_hub4(opt, b);
	return (i);
}
