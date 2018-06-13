/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshayi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 11:16:10 by sshayi            #+#    #+#             */
/*   Updated: 2018/06/11 12:08:55 by sshayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*tmp_dest;
	char	*tmp_src;

	i = 0;
	tmp_dest = (char *)s1;
	tmp_src = (char *)s2;
	while (i < n)
	{
		if (tmp_dest[i] != tmp_src[i])
			return ((unsigned char)tmp_dest[i] - (unsigned char)tmp_src[i]);
		i++;
	}
	return (0);
}
