/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshayi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:38:48 by sshayi            #+#    #+#             */
/*   Updated: 2018/06/11 11:55:24 by sshayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tsrc;
	unsigned char	*tdst;
	size_t			i;

	i = 0;
	tsrc = (unsigned char *)src;
	tdst = (unsigned char *)dst;
	if (src < dst)
	{
		while ((int)i <= (int)--len)
			tdst[len] = tsrc[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
