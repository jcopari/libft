/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:26:47 by jcopari-          #+#    #+#             */
/*   Updated: 2025/08/19 14:32:15 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		chr;
	size_t				i;

	i = 0;
	ptr = (const unsigned char *) s;
	chr = (unsigned char) c;
	while (i < n)
	{
		if (*ptr == chr)
			return ((void *)ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
