/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:31:06 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 19:22:05 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void		ft_putnstr(char *str, int b)
{
	int		i;

	i = 0;
	while (i < b)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_accu_neg_s(char *opt, int i)
{
	i = ft_opt_hub3(opt, ft_lenght(opt));
	i = ft_lenght(opt);
	return (i);
}

void		print_s(char *str, int c, char *opt)
{
	if (ft_accu(opt) > 0)
		ft_putnstr(str, c);
	else
		ft_putstr(str);
}

int			ft_istype_s(char *s, char *o)
{
	int		t[4];

	t[0] = 0;
	t[3] = ((s != NULL) ? (int)ft_strlen(s) : 0);
	if (ft_accu(o) == -9876)
		return (ft_accu_neg_s(o, t[0]));
	if (ft_accu(o) > 0)
		t[2] = (((int)ft_strlen(s) < ft_accu(o)) ? t[3] : ft_accu(o));
	if (s != NULL)
	{
		t[1] = ft_lenght(o) - ((ft_accu(o) > 0) ? t[2] : (int)ft_strlen(s));
		if (ft_accu(o) > (int)ft_strlen(s))
			t[1] = ft_lenght(o) - ft_strlen(s);
		t[0] = ft_opt_hub3(o, t[1]);
		print_s(s, t[2], o);
		t[0] += ft_opt_hub4(o, t[1]) + ((ft_accu(o) > 0) ? t[2] : t[3]);
		if (ft_accu(o) > (int)ft_strlen(s) && t[1] > 0)
			t[0] = ft_strlen(s) + t[1];
	}
	else
	{
		ft_putstr("(null)");
		return (6);
	}
	return (t[0]);
}
