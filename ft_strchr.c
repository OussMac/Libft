/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <oimzilen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:37:50 by oimzilen          #+#    #+#             */
/*   Updated: 2024/11/08 19:37:54 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int c)
{
	int		i;
	char	a;

	i = 0;
	a = (char) c;
	while (s[i])
	{
		if (a == s[i])
			return ((char *)s + i);
		i++;
	}
	if (a == s[i])
		return ((char *)s + i);
	return (0);
}
