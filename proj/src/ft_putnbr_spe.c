/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_spe.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 19:32:05 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 16:44:51 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void		ft_putnbr_spe(intmax_t n)
{
	if (n == LONG_MIN)
	{
		ft_putstr("9223372036854775808");
		return ;
	}
	if (n < 0)
	{
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_spe(n / 10);
		ft_putnbr_spe(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void		ft_putnbr_spe_shart(signed char n)
{
	if (n <= -128)
	{
		ft_putstr("128");
		return ;
	}
	if (n < 0)
	{
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_spe(n / 10);
		ft_putnbr_spe(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void		ft_putnbr_spe_spe(unsigned long long int n)
{
	if (n >= 10)
	{
		ft_putnbr_spe(n / 10);
		ft_putnbr_spe(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void		ft_putnbr_spe_short(unsigned char n)
{
	if (n >= 10)
	{
		ft_putnbr_spe_short(n / 10);
		ft_putnbr_spe_short(n % 10);
	}
	else
		ft_putchar(n + '0');
}
