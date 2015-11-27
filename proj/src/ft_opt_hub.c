/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opt_hub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 13:53:23 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 18:00:41 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_opt_hub2(char *opt, intmax_t d)
{
	int b;

	b = 0;
	while (d > 0 && ft_opt_moins(opt) == 1)
	{
		ft_putchar(' ');
		d--;
		b++;
	}
	return (b);
}

void		mid_opt_hub_8(char *opt, intmax_t c, int *b)
{
	if (ft_opt_plus(opt) == 1 && (ft_flag_zero(opt) == 1 ||
	ft_accu(opt) >= 1) && c >= 0 && ft_opt_moins(opt) == 1)
	{
		ft_putchar('+');
		(*b)++;
	}
	if (ft_opt_plus(opt) == 1 && ft_accu(opt) >= 0 && c >= 0 &&
	ft_opt_moins(opt) == 0)
	{
		ft_putchar('+');
		(*b)++;
	}
}

int			ft_opt_hub8(char *opt, int d, intmax_t c, int i)
{
	int b;

	b = 0;
	mid_opt_hub_8(opt, c, &b);
	while (d > 0 && (ft_opt_moins(opt) == 0))
	{
		if (ft_flag_space(opt) == 1)
		{
			ft_putchar(' ');
			b++;
			d--;
		}
		ft_putchar(((ft_flag_zero(opt) == 1 && ft_accu(opt) <= 0) ? '0' : ' '));
		d--;
		b++;
	}
	if (c < 0 && ft_accu(opt) < ft_lenght(opt) && ft_flag_zero(opt) == 0)
		ft_putchar('-');
	b += ft_print_accu(ft_accu(opt) - i);
	return (b);
}

int			ft_opt_hub200(char *opt, int d, intmax_t c, int i)
{
	int b;

	b = 0;
	i = i;
	if (ft_opt_plus(opt) == 1 && (ft_flag_zero(opt) == 1 ||
	ft_accu(opt) >= 1) && c >= 0 && ft_opt_moins(opt) == 1)
	{
		ft_putchar('+');
		b++;
		d--;
	}
	if (ft_opt_plus(opt) == 1 && ft_accu(opt) >= 0 && c >= 0 &&
	ft_opt_moins(opt) == 0)
	{
		ft_putchar('+');
		b++;
		d--;
	}
	while (d > 0 && (ft_opt_moins(opt) == 0))
	{
		ft_putchar(((ft_flag_zero(opt) == 1 && ft_accu(opt) <= 0) ? '0' : ' '));
		d--;
		b++;
	}
	return (b);
}

int			ft_opt_hub3(char *opt, int d)
{
	int b;

	b = 0;
	while (d > 0 && ft_opt_moins(opt) == 0)
	{
		if (ft_flag_zero(opt) == 1)
			ft_putchar('0');
		else
			ft_putchar(' ');
		d--;
		b++;
	}
	return (b);
}
