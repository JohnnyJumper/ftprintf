/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 20:13:59 by jtahirov          #+#    #+#             */
/*   Updated: 2017/11/20 13:51:49 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		init_funcs(func *funcs)
{
	funcs['x'] = &ft_get_hex;
	funcs['X'] = &ft_hex_wrapper;
	funcs['s'] = &ft_get_str;
	funcs['S'] = &ft_get_str;
	funcs['i'] = &ft_get_number2;
	funcs['d'] = &ft_get_number2;
	funcs['D'] = &ft_get_number2;
	funcs['o'] = &ft_get_octal;
	funcs['O'] = &ft_get_octal;
	funcs['%'] = &ft_get_char;
	funcs['c'] = &ft_get_char;
	funcs['C'] = &ft_get_char;
	funcs['p'] = &ft_get_addr;
	funcs['b'] = &ft_get_mybinary;
	funcs['U'] = &ft_get_unumber2;
	funcs['u'] = &ft_get_unumber2;
}

func			get_func(char c)
{
	static	func	*funcs;

	if (!funcs)
	{
		funcs = ft_memalloc(sizeof(*funcs) * 256);
		if (funcs)
			init_funcs(funcs);
	}
	return (funcs[(int)c]);
}
