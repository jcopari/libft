/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:26:47 by jcopari-          #+#    #+#             */
/*   Updated: 2025/07/29 19:30:40 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//  The  memchr()  function  scans  the  initial n bytes of the memory area
//	pointed to by s for the first instance of c.  Both c and the  bytes  of
//	the memory area pointed to by s are interpreted as unsigned char.

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
