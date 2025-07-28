/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:53:15 by jcopari-          #+#    #+#             */
/*   Updated: 2025/07/25 17:52:39 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	const char	*ptr;
	char		chr;

	ptr = s;
	chr = (unsigned char) c;
	while (*ptr)
	{
		if (*ptr == chr)
			return ((char *)ptr);
		ptr++;
	}
	if (c == '\0')
		return ((char *)ptr);
	else
		return (NULL);
}
