/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:03:42 by jcopari-          #+#    #+#             */
/*   Updated: 2025/08/19 17:53:20 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*ptr;
	unsigned char	chr;

	chr = (unsigned char)c;
	ptr = s + ft_strlen(s);
	while (ptr >= s)
	{
		if (*ptr == chr)
			return ((char *)ptr);
		ptr--;
	}
	return (NULL);
}
