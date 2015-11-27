/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_uup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 16:23:46 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 16:39:07 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_istype_uup(va_list ap)
{
	unsigned long		c;
	int					b;

	c = va_arg(ap, unsigned long);
	ft_putnbr_spe_spe(c);
	b = size_of_int_spe(c);
	return (b);
}
