/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_hub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 14:45:00 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 15:41:20 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int				istype_hub_c(char *opt, va_list ap)
{
	if (ft_flag_l(opt) == 1)
		return (ft_istype_cup(va_arg(ap, unsigned int), opt));
	if (ft_flag_ll(opt) == 1)
		return (ft_istype_cup(va_arg(ap, unsigned int), opt));
	else
		return (ft_istype_c(ap, opt));
}

int				istype_hub_x(char *opt, va_list ap)
{
	if (ft_flag_z(opt) == 1)
		return (ft_istype_x(va_arg(ap, size_t), opt));
	if (ft_flag_l(opt) == 1)
		return (ft_istype_x(va_arg(ap, unsigned long int), opt));
	if (ft_flag_ll(opt) == 1)
		return (ft_istype_x(va_arg(ap, unsigned long long int), opt));
	if (ft_flag_h(opt) == 1)
		return (ft_istype_x((unsigned short)va_arg(ap, int), opt));
	if (ft_flag_hh(opt) == 1)
		return (ft_istype_x((unsigned char)va_arg(ap, int), opt));
	if (ft_flag_j(opt) == 1)
		return (ft_istype_x(va_arg(ap, uintmax_t), opt));
	else
		return (ft_istype_x(va_arg(ap, unsigned int), opt));
}

int				istype_hub_xup(char *opt, va_list ap)
{
	if (ft_flag_z(opt) == 1)
		return (ft_istype_xup(va_arg(ap, size_t), opt));
	if (ft_flag_l(opt) == 1)
		return (ft_istype_xup(va_arg(ap, unsigned long int), opt));
	if (ft_flag_ll(opt) == 1)
		return (ft_istype_xup(va_arg(ap, unsigned long long int), opt));
	if (ft_flag_h(opt) == 1)
		return (ft_istype_xup((unsigned short)va_arg(ap, int), opt));
	if (ft_flag_hh(opt) == 1)
		return (ft_istype_xup((unsigned char)va_arg(ap, int), opt));
	if (ft_flag_j(opt) == 1)
		return (ft_istype_xup(va_arg(ap, uintmax_t), opt));
	else
		return (ft_istype_xup(va_arg(ap, unsigned int), opt));
}

int				istype_hub_u(char *opt, va_list ap)
{
	if (ft_flag_z(opt) == 1)
		return (ft_istype_u(va_arg(ap, size_t), opt));
	if (ft_flag_l(opt) == 1)
		return (ft_istype_u(va_arg(ap, unsigned long int), opt));
	if (ft_flag_ll(opt) == 1)
		return (ft_istype_u(va_arg(ap, unsigned long long int), opt));
	if (ft_flag_h(opt) == 1)
		return (ft_istype_u((unsigned short)va_arg(ap, int), opt));
	if (ft_flag_hh(opt) == 1)
		return (ft_istype_u((unsigned char)va_arg(ap, int), opt));
	if (ft_flag_j(opt) == 1)
		return (ft_istype_u(va_arg(ap, uintmax_t), opt));
	else
		return (ft_istype_u(va_arg(ap, unsigned int), opt));
}

int				istype_hub_o(char *opt, va_list ap)
{
	if (ft_flag_z(opt) == 1)
		return (ft_istype_o(va_arg(ap, size_t), opt));
	if (ft_flag_l(opt) == 1)
		return (ft_istype_o(va_arg(ap, unsigned long int), opt));
	if (ft_flag_ll(opt) == 1)
		return (ft_istype_o(va_arg(ap, unsigned long long int), opt));
	if (ft_flag_h(opt) == 1)
		return (ft_istype_o((unsigned short)va_arg(ap, int), opt));
	if (ft_flag_hh(opt) == 1)
		return (ft_istype_o((unsigned char)va_arg(ap, int), opt));
	if (ft_flag_j(opt) == 1)
		return (ft_istype_o(va_arg(ap, uintmax_t), opt));
	else
		return (ft_istype_o(va_arg(ap, unsigned int), opt));
}
