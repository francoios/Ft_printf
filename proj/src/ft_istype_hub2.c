/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_hub2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 14:59:45 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 16:38:33 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int				istype_hub_d(char *opt, va_list ap)
{
	if (ft_flag_z(opt) == 1)
		return (ft_istype_d(va_arg(ap, ssize_t), opt));
	if (ft_flag_l(opt) == 1)
		return (ft_istype_d(va_arg(ap, long int), opt));
	if (ft_flag_ll(opt) == 1)
		return (ft_istype_d(va_arg(ap, long long int), opt));
	if (ft_flag_h(opt) == 1)
		return (ft_istype_d((short)va_arg(ap, int), opt));
	if (ft_flag_hh(opt) == 1)
		return (ft_istype_d((char)va_arg(ap, int), opt));
	if (ft_flag_j(opt) == 1)
		return (ft_istype_d(va_arg(ap, intmax_t), opt));
	else
		return (ft_istype_d(va_arg(ap, int), opt));
}

int				istype_hub_s(char *opt, va_list ap)
{
	if (ft_flag_l(opt) == 1)
		return (ft_putwstr(va_arg(ap, wchar_t *), opt));
	if (ft_flag_ll(opt) == 1)
		return (ft_putwstr(va_arg(ap, wchar_t *), opt));
	else
		return (ft_istype_s(va_arg(ap, char *), opt));
}

int				istype_hub_split(char *opt, va_list ap)
{
	if (opt[ft_strlen(opt) - 1] == 'c')
		return (istype_hub_c(opt, ap));
	if (opt[ft_strlen(opt) - 1] == 'C')
		return (ft_istype_cup(va_arg(ap, unsigned int), opt));
	if (opt[ft_strlen(opt) - 1] == 'x')
		return (istype_hub_x(opt, ap));
	if (opt[ft_strlen(opt) - 1] == 'X')
		return (istype_hub_xup(opt, ap));
	if (opt[ft_strlen(opt) - 1] == 'u')
		return (istype_hub_u(opt, ap));
	if (opt[ft_strlen(opt) - 1] == 'U')
		return (ft_istype_uup(ap));
	if (opt[ft_strlen(opt) - 1] == 'o')
		return (istype_hub_o(opt, ap));
	if (opt[ft_strlen(opt) - 1] == 'O')
		return (ft_istype_oup(ap, opt));
	else
		return (istype_hub_split2(opt, ap));
}

int				istype_hub_split2(char *opt, va_list ap)
{
	if (opt[ft_strlen(opt) - 1] == 'i')
		return (istype_hub_d(opt, ap));
	if (opt[ft_strlen(opt) - 1] == 'D')
		return (ft_istype_i(va_arg(ap, long int), opt));
	if (opt[ft_strlen(opt) - 1] == 'd')
		return (istype_hub_d(opt, ap));
	if (opt[ft_strlen(opt) - 1] == 'p')
		return (ft_istype_p(va_arg(ap, uintmax_t), opt));
	if (opt[ft_strlen(opt) - 1] == 'S')
		return (ft_putwstr(va_arg(ap, wchar_t *), opt));
	if (opt[ft_strlen(opt) - 1] == 's')
		return (istype_hub_s(opt, ap));
	if (opt[ft_strlen(opt) - 1] == '%')
		return (ft_istype_percent(opt));
	else
		return (ft_isnotype(opt[ft_strlen(opt) - 1], opt));
}
