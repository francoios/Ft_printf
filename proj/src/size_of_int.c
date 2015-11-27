/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_of_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 17:15:28 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 16:46:08 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int					size_of_int(intmax_t nb)
{
	int			i;
	long long	k;

	i = 0;
	k = 1;
	if (nb <= 2147483647)
	{
		i++;
		nb = nb / 10;
	}
	while (nb / k > 0)
	{
		k *= 10;
		i++;
	}
	return (i);
}

int					size_of_int_neg(long long nb)
{
	int			i;
	long long	k;

	i = 0;
	k = 1;
	if (nb <= -2147483648)
	{
		i++;
		nb = nb / 10;
	}
	nb = -nb;
	while (nb / k > 0)
	{
		k *= 10;
		i++;
	}
	i++;
	return (i);
}

char				size_of_int_short(char nb)
{
	char		i;
	char		k;

	i = 0;
	k = 1;
	if (nb == 127)
	{
		return (3);
	}
	while (nb / k > 0)
	{
		k *= 10;
		i++;
	}
	return (i);
}

char				size_of_int_neg_short(char nb)
{
	char		i;
	char		k;

	i = 0;
	k = 1;
	if (nb <= -128)
	{
		return (4);
	}
	nb = -nb;
	while (nb / k > 0)
	{
		k *= 10;
		i++;
	}
	i++;
	return (i);
}

int					size_of_int_spe(uintmax_t nb)
{
	uintmax_t		i;
	uintmax_t		k;

	i = 0;
	k = 1;
	while (nb / k > 9)
	{
		k *= 10;
		i++;
	}
	return (i + 1);
}
