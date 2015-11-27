/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_pursent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 18:15:28 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/24 16:27:50 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_istype_percent(char *opt)
{
	int i;

	i = ft_lenght(opt) - 1;
	i = ft_opt_hub3(opt, i) + 1;
	ft_putchar('%');
	return (i);
}
