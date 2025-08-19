/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:53:15 by jcopari-          #+#    #+#             */
/*   Updated: 2025/08/19 17:26:30 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char		*ptr;
	unsigned char	chr;

	ptr = s;
	chr = (unsigned char) c;
	while (*ptr)
	{
		if (*ptr == chr)
			return ((char *)ptr);
		ptr++;
	}
	if (chr == '\0')
		return ((char *)ptr);
	else
		return (NULL);
}
