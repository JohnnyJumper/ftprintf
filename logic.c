/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:44:15 by jtahirov          #+#    #+#             */
/*   Updated: 2017/11/20 16:53:11 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		parse_exec(char **format, va_list *ap)
{
	t_arg	*args;

	args = ft_argnew();
	parse_flags(format, args);
	parse_width(format, args, ap);
	parse_precision(format, args, ap);
	parse_length(format, args);
	parse_specifier(format, args);
	return ((ft_logic(ap, args)));
}

int		ft_logic(va_list *ap, t_arg *args)
{
	char	*value;
	func	f;

	f = get_func(args->sp);
	value = f(args, ap);
	write(1, value, args->l);
	ft_memdel((void **)&value);
	ft_argdelete(args);	
	return (args->l);
}
