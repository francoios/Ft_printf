/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 08:51:33 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 19:14:12 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_putchar_exept(char c)
{
	return (write (1, &c, 1));
}

int			ft_printf(char *str, ...)
{
	t_stock		a;
	va_list		ap;

	va_start(ap, str);
	a.cnt = 0;
	a.writed = 0;
	while (str[a.cnt])
	{
		if (str[a.cnt] != '\0' && str[a.cnt] != '%')
		{
			a.writed += ft_putchar_exept(str[a.cnt]);
			a.cnt++;
		}
		else if (str[a.cnt] == '%')
		{
			a.c = ft_istype(str, ap, &a);
			a.writed += ((a.c == -5) ? 0 : a.c);
			a.cnt += ((a.c == -5) ? 0 : 2);
		}
		else
			a.cnt++;
	}
	va_end(ap);
	return (a.writed);
}
