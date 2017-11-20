/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:54:08 by jtahirov          #+#    #+#             */
/*   Updated: 2017/11/09 19:11:27 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(char *format, ...)
{
	va_list		ap;
	int			res;
	char		*perc;

	va_start(ap, format);
	res = 0;

	while ((perc = ft_strchr(format, '%')))
	{
		res += write(1, format, perc-format);
		format = perc + 1;
		if (*format)
			res += parse_exec(&format, &ap);
	}
	if (*format)
		res += write(1, format, ft_strlen(format));
	va_end(ap);
	return(res);
}
