/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenght.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 16:53:02 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 16:48:45 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_lenght(char *opt)
{
	int		i;
	int		b;
	char	*tmp;

	i = 0;
	b = 0;
	tmp = (char*)malloc(sizeof(char) * ft_strlen(opt));
	while (opt[i])
	{
		if (opt[i] > '0' && opt[i] <= '9' &&
		opt[i - 1] != '.' && opt[i - 2] != '.')
		{
			while (opt[i] && opt[i] >= '0' && opt[i] <= '9')
			{
				tmp[b] = opt[i];
				i++;
				b++;
			}
			if (ft_strlen(tmp) >= 1)
				return (ft_atoi(tmp));
		}
		i++;
	}
	return (0);
}
