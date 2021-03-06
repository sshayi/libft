/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshayi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:29:06 by sshayi            #+#    #+#             */
/*   Updated: 2018/06/08 12:08:52 by sshayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int		i;
	char	*str;

	if (!s)
		return ;
	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		str[i] = '\0';
		i++;
	}
}
