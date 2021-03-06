/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opt_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 12:17:26 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 16:43:55 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int				ft_flag_zero(char *opt)
{
	int i;

	i = 0;
	while (opt[i])
	{
		if (opt[i] == '0' && (opt[i - 1] > '9' || opt[i - 1] < '0'))
			return (1);
		i++;
	}
	return (0);
}
