/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshayi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 16:38:26 by sshayi            #+#    #+#             */
/*   Updated: 2018/06/06 14:15:21 by sshayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	int		j;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while ((s[len] == ' ' || s[len] == '\n' || s[len] == '\t') && (i < len))
		len--;
	len++;
	str = ft_strnew(len - i);
	if (str == 0)
		return (NULL);
	while (i < len)
	{
		str[j++] = s[i++];
	}
	str[j] = '\0';
	return (str);
}
