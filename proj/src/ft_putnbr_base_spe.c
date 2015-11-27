/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_spe.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 12:45:31 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 18:13:42 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int		ft_inbase(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)));
}

int				ft_atoi_base(char *str, int base)
{
	int	value;
	int	sign;

	value = 0;
	if (base <= 1 || base > 36)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
			|| *str == '\r' || *str == '\v')
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_inbase(*str, base))
	{
		if (*str - 'A' >= 0)
			value = value * base + (*str - 'A' + 10);
		else
			value = value * base + (*str - '0');
		str++;
	}
	return (value * sign);
}

void			ft_putnbr_base_spe(uintmax_t nb, char *base)
{
	if (nb >= (uintmax_t)ft_strlen(base))
		ft_putnbr_base_spe(nb / ft_strlen(base), base);
	ft_putchar(base[nb % ft_strlen(base)]);
}

void			ft_putnbr_base_spe_short(unsigned char nb, char *base)
{
	if (nb >= (unsigned char)ft_strlen(base))
		ft_putnbr_base_spe_short(nb / ft_strlen(base), base);
	ft_putchar(base[nb % ft_strlen(base)]);
}
