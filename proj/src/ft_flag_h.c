/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_h.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 19:01:30 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/19 21:14:52 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_flag_h(char *opt)
{
	int i;

	i = 0;
	while (opt[i])
	{
		if (opt[i] == 'h' && opt[i + 1] != 'h')
			return (1);
		i++;
	}
	return (0);
}