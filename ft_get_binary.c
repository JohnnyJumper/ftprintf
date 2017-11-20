/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_binary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:43:21 by jtahirov          #+#    #+#             */
/*   Updated: 2017/11/13 21:31:20 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_mybinary(t_arg *args, va_list *ap)
{
	char	*res;

	conversion_uint(args, ap);
	res = ft_get_binary(args->val.uint);
	args->l = ft_strlen(res);
	return (res);
}
