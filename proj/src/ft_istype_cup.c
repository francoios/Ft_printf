/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_cup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 13:01:17 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 16:58:28 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char			*get_mask(int nb)
{
	char *str;

	if (nb <= 7)
		str = ft_strdup("0xxxxxxx");
	else if (nb <= 11)
		str = ft_strdup("110xxxxx 10xxxxxx");
	else if (nb > 11 && nb <= 16)
		str = ft_strdup("1110xxxx 10xxxxxx 10xxxxxx");
	else
		str = ft_strdup("11110xxx 10xxxxxx 10xxxxxx 10xxxxxx");
	return (str);
}

char			*fill_mask(char *str, char *str2)
{
	int		i;
	int		b;

	i = ft_strlen(str2) - 1;
	b = ft_strlen(str) - 1;
	while (i >= 0)
	{
		if (str2[i] == 'x' && b >= 0)
		{
			str2[i] = str[b];
			b--;
		}
		i--;
	}
	i = 0;
	while (str2[i])
	{
		if (str2[i] == 'x')
			str2[i] = '0';
		i++;
	}
	return (str2);
}

int				get_nb(char *str)
{
	if (ft_strlen(str) <= 7)
		return (1);
	else if (ft_strlen(str) <= 11)
		return (2);
	else if (ft_strlen(str) > 11 && ft_strlen(str) <= 16)
		return (3);
	else
		return (4);
}

int				ft_wstrlen(wchar_t *str)
{
	int		nb;
	int		i;
	char	*str2;

	i = 0;
	nb = 0;
	str2 = ft_strdup("");
	while (str[i])
	{
		o_tochar(str[i], "01", &str2, 0);
		nb += get_nb(str2);
		i++;
		str2 = ft_strdup("");
	}
	return (nb);
}

int				ft_istype_cup(unsigned int b, char *opt)
{
	char	*str;
	char	**tab;
	int		nb;
	int		tab2[4];
	int		i;

	i = 0;
	str = ft_strdup("");
	opt = opt;
	o_tochar(b, "01", &str, 0);
	tab = ft_strsplit(fill_mask(str, get_mask(ft_strlen(str))), ' ');
	while (tab[i])
	{
		tab2[i] = ft_atoi_base(tab[i], 2);
		i++;
	}
	nb = get_nb(str);
	ft_putwchar(nb, tab2);
	free(str);
	return (nb);
}
