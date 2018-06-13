/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshayi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:08:23 by sshayi            #+#    #+#             */
/*   Updated: 2018/06/12 11:29:20 by sshayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	char	*tmp_dst;
	char	*tmp_src;

	i = 0;
	tmp_dst = dst;
	tmp_src = (char *)src;
	i = ft_strlen(tmp_dst);
	j = ft_strlen(tmp_src);
	if (i > dstsize)
		return (j + dstsize);
	if (i < dstsize)
	{
		ft_strncat(dst, tmp_src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (i + j);
}
