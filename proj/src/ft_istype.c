/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:38:54 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/25 16:37:06 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int				is_flag(char c)
{
	if (c == ' ' || c == 'z' || c == 'j' || c == 'h' || c == 'l' || c == '#' ||
		c == '.' || c == '-' || c == '+' || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int				is_opt(char c)
{
	if (c == 'C' || c == 'c' || c == 'x' || c == 'X' || c == 'U' || c == 'u' ||
		c == 'p' || c == 'd' || c == 'D' || c == 'i' || c == 'O' || c == 'o' ||
		c == 'S' || c == 's' || c == '%')
		return (1);
	else
		return (0);
}

char			*get_opt(char *str, t_stock **a)
{
	char	*tmp;
	int		i;

	(*a)->cnt++;
	tmp = (char *)malloc(sizeof(char) * ft_strlen(str));
	i = 0;
	while (is_opt(str[(*a)->cnt]) == 0 && is_flag(str[(*a)->cnt]) == 1 &&
	str[(*a)->cnt])
	{
		tmp[i] = str[(*a)->cnt];
		i++;
		(*a)->cnt++;
	}
	if (is_opt(str[(*a)->cnt]) == 1 || ft_isprint(str[(*a)->cnt]) == 1)
	{
		tmp[i] = str[(*a)->cnt];
		i++;
	}
	else if (is_opt(str[(*a)->cnt]) == 0)
	{
		return (NULL);
	}
	tmp[i] = '\0';
	(*a)->cnt--;
	return (tmp);
}

int				ft_istype(char *str, va_list ap, t_stock *a)
{
	char		*opt;

	opt = get_opt(str, &a);
	if (opt == NULL)
		return (-5);
	return (istype_hub_split(opt, ap));
}
