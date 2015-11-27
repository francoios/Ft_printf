/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_tochar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 15:44:58 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 19:13:06 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void		o_tochar(uintmax_t nb, char *base, char **str, int *i)
{
	char		bb[2];

	if (nb >= (uintmax_t)ft_strlen(base))
	{
		o_tochar(nb / ft_strlen(base), base, str, i++);
		o_tochar(nb % ft_strlen(base), base, str, i++);
	}
	else
	{
		bb[0] = base[nb];
		bb[1] = '\0';
		*(str) = ft_strjoin(*(str), bb);
	}
}

void		o_tochar_spe(unsigned char nb, char *base, char **str, int *i)
{
	char		bb[2];

	if (nb >= (unsigned char)ft_strlen(base))
	{
		o_tochar_spe(nb / ft_strlen(base), base, str, i++);
		o_tochar_spe(nb % ft_strlen(base), base, str, i++);
	}
	else
	{
		bb[0] = base[nb];
		bb[1] = '\0';
		*(str) = ft_strjoin(*(str), bb);
	}
}

void		o_tochar_spe_char(char nb, char *base, char **str, int *i)
{
	char		bb[2];

	if (nb <= -128)
	{
		*str = ft_strdup("-128");
		return ;
	}
	if (nb < 0)
	{
		bb[0] = '-';
		bb[1] = '\0';
		*(str) = ft_strjoin(*(str), bb);
		nb = -nb;
	}
	if (nb >= (char)ft_strlen(base))
	{
		o_tochar_spe_char(nb / ft_strlen(base), base, str, i++);
		o_tochar_spe_char(nb % ft_strlen(base), base, str, i++);
	}
	else
	{
		bb[0] = base[(int)nb];
		bb[1] = '\0';
		*(str) = ft_strjoin(*(str), bb);
	}
}

void		o_tochar_spe_int(intmax_t nb, char *base, char **str, int *i)
{
	char		bb[2];

	if (nb < 0)
	{
		if (nb == LONG_MIN)
		{
			*(str) = ft_strdup("-9223372036854775808");
			return ;
		}
		bb[0] = '-';
		bb[1] = '\0';
		*(str) = ft_strjoin(*(str), bb);
		nb = -nb;
	}
	if (nb >= (int)ft_strlen(base))
	{
		o_tochar_spe_int(nb / ft_strlen(base), base, str, i++);
		o_tochar_spe_int(nb % ft_strlen(base), base, str, i++);
	}
	else
	{
		bb[0] = base[nb];
		bb[1] = '\0';
		*(str) = ft_strjoin(*(str), bb);
	}
}
