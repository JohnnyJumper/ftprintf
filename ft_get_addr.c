/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_addr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:12:56 by jtahirov          #+#    #+#             */
/*   Updated: 2017/11/21 19:55:29 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*get_prefix_posfix(t_arg *args)
{
	char	*res;
	int		num;

	num = args->width - args->l;
	num = (num < 0) ? 0 : num;
	res = ft_strnew(num);
	if (args->flag.zero)
		ft_memset(res, '0', num);
	else
		ft_memset(res, ' ', num);
	return (res);
}

char			*ft_get_addr(t_arg *args, va_list *ap)
{
	char	*value;
	char	*prefix_postfix;
	char	*res;

	args->val.uint = va_arg(*ap, unsigned long int);
	value = ft_strmjoin(2, "0x", ft_dectohex(args->val.uint));
	args->l = ft_strlen(value);
	prefix_postfix = get_prefix_posfix(args);
	if (args->flag.left_align || *prefix_postfix == '0')
		res = ft_strmjoin(2, value, prefix_postfix);
	else
		res = ft_strmjoin(2, prefix_postfix, value);
	args->l = ft_strlen(res);
	return (res);
}
