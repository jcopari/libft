/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:39:17 by jcopari-          #+#    #+#             */
/*   Updated: 2025/08/19 17:07:39 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char		*p_src;
	unsigned char			*p_dest;
	size_t					i;

	i = 0;
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	if (p_dest < p_src)
	{
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	else if (p_dest > p_src)
	{
		while (n > 0)
		{
			n--;
			p_dest[n] = p_src[n];
		}
	}
	return (dest);
}
