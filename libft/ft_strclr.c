/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:13:45 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/19 21:15:55 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_strclr(char *s)
{
	if (s != NULL)
		ft_bzero(s, ft_strlen(s));
}
