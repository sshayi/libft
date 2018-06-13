/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshayi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:40:52 by sshayi            #+#    #+#             */
/*   Updated: 2018/06/13 11:59:21 by sshayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*tmp_dest;
	char	*tmp_src;

	i = 0;
	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		if ((unsigned char)tmp_src[i] == (unsigned char)c)
			return (char *)dest + i + 2;
		i++;
	}
	return (NULL);
}

int main(void)
{
	char dest[10] = "kuku";
	const char *src;
	unsigned char c;

	//dest = "kuku";
	src = "k"; //copy string until character K found
	printf("%s\n", ft_memccpy(dest, src, c, 4));
	return (0);
}

