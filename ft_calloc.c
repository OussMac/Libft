/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <oimzilen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:34:47 by oimzilen          #+#    #+#             */
/*   Updated: 2024/11/16 17:56:23 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*ptr;
	size_t			mult;

	mult = count * size;
	if (count && mult / count != size)
		return (NULL);
	ptr = malloc(sizeof(char) * mult);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < mult)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
