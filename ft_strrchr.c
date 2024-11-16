/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <oimzilen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:20:18 by oimzilen          #+#    #+#             */
/*   Updated: 2024/11/16 17:58:32 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;
	char	*ptr;

	i = 0;
	ptr = NULL;
	a = (char ) c;
	while (s[i])
	{
		if (s[i] == a)
		{
			ptr = (char *) s + i;
		}
		i++;
	}
	if (s[i] == a)
		ptr = ((char *) s + i);
	return (ptr);
}
