/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opt_hub2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 17:43:55 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 18:09:43 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_opt_hub4(char *opt, int d)
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

int			ft_opt_hub12(char *opt, int d, unsigned long long int c, char *str)
{
	int b;

	b = 0;
	c = c;
	str = str;
	while (d > 0 && (ft_opt_moins(opt) == 0))
	{
		ft_putchar(((ft_flag_zero(opt) == 1) ? '0' : ' '));
		d--;
		b++;
	}
	return (b);
}

int			ft_opt_hub5(char *opt, int d, unsigned long long int c)
{
	int b;

	b = 0;
	c = c;
	if (ft_flag_dieze(opt) == 1 && d > 0 && (ft_opt_moins(opt) == 0))
	{
		b++;
		d--;
	}
	while (d > 0 && (ft_opt_moins(opt) == 0))
	{
		ft_putchar(((ft_flag_zero(opt) == 1) ? '0' : ' '));
		d--;
		b++;
	}
	return (b);
}

int			ft_opt_hub120(char *opt, int d, unsigned long long int c)
{
	int b;

	c = c;
	b = 0;
	if (ft_flag_dieze(opt) == 1 && d > 0 && (ft_opt_moins(opt) == 0))
	{
		b += 2;
		d -= 2;
	}
	while (d > 0 && (ft_opt_moins(opt) == 0))
	{
		ft_putchar(((ft_flag_zero(opt) == 1) ? '0' : ' '));
		d--;
		b++;
	}
	return (b);
}

int			ft_opt_hub30(char *opt, int d, unsigned long long int c)
{
	int b;

	b = 0;
	c = c;
	if (ft_flag_dieze(opt) == 1 && d > 0 && (ft_opt_moins(opt) == 0))
	{
		b++;
		d--;
	}
	while (d > 0 && (ft_opt_moins(opt) == 0))
	{
		ft_putchar(((ft_flag_zero(opt) == 1) ? '0' : ' '));
		d--;
		b++;
	}
	return (b);
}
