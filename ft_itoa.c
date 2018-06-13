/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshayi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 10:02:17 by sshayi            #+#    #+#             */
/*   Updated: 2018/06/05 10:15:04 by sshayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(int n)
{
	size_t count;

	count = 1;
	while (n /= 10)
	{
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	char			*s;
	size_t			len;
	unsigned int	nbr;

	len = get_len(n);
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		len++;
	}
	s = ft_strnew(len);
	if (s == NULL)
		return (NULL);
	s[--len] = nbr % 10 + '0';
	while (nbr /= 10)
	{
		s[--len] = nbr % 10 + '0';
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
