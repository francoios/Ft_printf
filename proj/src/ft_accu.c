/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_accu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 16:06:58 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 15:12:59 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char		*get_accu(char *opt, int *bol, int i, int b)
{
	char *tmp;

	tmp = (char*)malloc(sizeof(char) * ft_strlen(opt));
	while (opt[i])
	{
		if (opt[i] == '.')
		{
			(*bol) = 1;
			while ((opt[i + 1] && opt[i + 1] >= '0' && opt[i + 1] <= '9') ||
			(opt[i + 1] == '-'))
			{
				tmp[b] = opt[i + 1];
				i++;
				b++;
			}
		}
		i++;
	}
	tmp[b] = '\0';
	return (tmp);
}

int			ft_accu(char *opt)
{
	char	*tmp;
	int		bol;

	bol = 0;
	tmp = get_accu(opt, &bol, 0, 0);
	if ((tmp[0] == '0' && tmp[1] == '\0') || (bol == 1 && tmp[0] == '\0'))
		return (-9876);
	if (ft_strlen(tmp) >= 1)
		return (ft_atoi(tmp));
	else
		return (0);
}

int			ft_print_accu(int nb)
{
	int i;

	i = 0;
	while (i < nb)
	{
		ft_putchar('0');
		i++;
	}
	return (i);
}
