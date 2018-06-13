/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshayi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:30:31 by sshayi            #+#    #+#             */
/*   Updated: 2018/06/01 15:16:15 by sshayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return ;
	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		f(i, &str[i]);
		i++;
	}
}
