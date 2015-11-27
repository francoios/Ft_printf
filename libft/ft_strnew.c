/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:16:56 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/19 21:15:42 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnew(size_t size)
{
	char	*ap;

	if (!(ap = (char*)malloc(size + 1)))
		return (NULL);
	ft_bzero(ap, size + 1);
	return (ap);
}
