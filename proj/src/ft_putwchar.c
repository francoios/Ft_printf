/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 16:16:49 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 17:41:27 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int				str_null(void)
{
	ft_putstr("(null)");
	return (6);
}

int				countwchar(unsigned int b)
{
	char	*str;
	int		nb;

	str = ft_strdup("");
	o_tochar(b, "01", &str, 0);
	nb = get_nb(str);
	return (nb);
}

void			ft_putwchar(int nb, int *tab)
{
	if (nb >= 1)
		write(1, &tab[0], 1);
	if (nb >= 2)
		write(1, &tab[1], 1);
	if (nb >= 3)
		write(1, &tab[2], 1);
	if (nb >= 4)
		write(1, &tab[3], 1);
}

int				ft_putwstr(wchar_t *str, char *opt)
{
	unsigned int	i;
	int				tab[3];
	int				c;

	tab[0] = 0;
	tab[1] = 0;
	if (str == NULL)
		return (str_null());
	if (ft_accu(opt) > countwchar(str[0]) && ft_accu(opt) <= 4)
		tab[2] = countwchar(str[0]);
	else
		tab[2] = ft_accu(opt);
	i = ft_lenght(opt) - ((ft_accu(opt) > 0) ? tab[2] : ft_wstrlen(str));
	c = ft_opt_hub3(opt, i);
	if (ft_accu(opt) == -9876)
		return (mid_putwstr(opt, c));
	tab[2] = ft_accu(opt);
	if (tab[2] > 0)
		while (tab[1] + countwchar(str[tab[0]]) <= tab[2])
			print_wstr1(&tab[0], &tab[1], str, opt);
	else
		while (tab[1] < ft_wstrlen(str))
			print_wstr2(&tab[0], &tab[1], str, opt);
	c += ft_opt_hub4(opt, i);
	return (((c >= 0) ? tab[1] + c : tab[1]));
}
