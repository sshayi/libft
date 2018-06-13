/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshayi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:00:20 by sshayi            #+#    #+#             */
/*   Updated: 2018/06/11 11:45:46 by sshayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	i = 0;
	tmp_dest = dest;
	tmp_src = (unsigned char *)src;
	if (src < dest)
		ft_memmove(dest, src, n);
	else
		while (i < n)
		{
			*tmp_dest = *tmp_src;
			tmp_dest++;
			tmp_src++;
			i++;
		}
	return (dest);
}
