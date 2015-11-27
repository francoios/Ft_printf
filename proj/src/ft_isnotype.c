/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnotype.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 17:28:30 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 16:57:54 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

unsigned char		size_of_int_spe_short(unsigned char nb)
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

int					mid_putwstr(char *opt, int c)
{
	c = ft_opt_hub3(opt, ft_lenght(opt));
	c = ft_lenght(opt);
	return (c);
}

void				print_wstr1(int *b, int *nb, wchar_t *str, char *opt)
{
	(*nb) += ft_istype_cup(str[(*b)], opt);
	(*b)++;
}

void				print_wstr2(int *b, int *nb, wchar_t *str, char *opt)
{
	(*nb) += ft_istype_cup(str[(*b)], opt);
	(*b)++;
}

int					ft_isnotype(char c, char *opt)
{
	int		i;
	int		b;

	b = ft_lenght(opt) - 1;
	i = ft_opt_hub3(opt, b) + 1;
	ft_putchar(c);
	i += ft_opt_hub4(opt, b);
	return (i);
}
