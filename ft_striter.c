/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshayi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:13:15 by sshayi            #+#    #+#             */
/*   Updated: 2018/06/13 12:04:38 by sshayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f) (char *))
{
	int		i;
	char	*str;

	if (!s || !f)
		return ;
	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		f(&str[i]);
		i++;
	}
}
