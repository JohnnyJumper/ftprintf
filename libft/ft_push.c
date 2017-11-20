/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 17:53:17 by jtahirov          #+#    #+#             */
/*   Updated: 2017/10/19 21:11:51 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_push(void *array, size_t array_size,
		const void *data, size_t data_size)
{
	void	*newarr;

	if (!array)
	{
		newarr = ft_memalloc(data_size);
		memcpy(newarr, data, data_size);
	}
	else if (!data)
	{
		newarr = ft_memalloc(array_size + data_size);
		ft_memcpy(newarr, (const void *)array, array_size);
	}
	else
	{
		newarr = ft_memalloc(array_size + data_size);
		ft_memcpy(newarr, (const void *)array, array_size);
		ft_memcpy(newarr + array_size, data, data_size);
		ft_memdel((void **)&array);
	}
	return (newarr);
}
