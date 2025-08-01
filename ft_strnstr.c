/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:55:30 by jcopari-          #+#    #+#             */
/*   Updated: 2025/08/01 20:03:58 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*INCOMPLETA*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*ptr;
	size_t		i;
	size_t		j;

	i = 0;
	if (little[j] == '\0')
	{
		ptr = &big[i];
		return ((char *)ptr);
	}
	while (big[i] != '\0' && i < len)
	{
		if (j == 0 && big[i] == little[0])
			ptr = &big[i];
		if (big[i] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)ptr);
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
