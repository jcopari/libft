/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:47:16 by jcopari-          #+#    #+#             */
/*   Updated: 2025/08/19 12:47:20 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str1;
	size_t	str2;
	size_t	i;
	char	*ptr;

	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	i = 0;
	ptr = malloc(sizeof(char) * (str1 + str2 + 1));
	if (!ptr)
		return (NULL);
	while (i < str1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < str2)
	{
		ptr[str1 + i] = s2[i];
		i++;
	}
	ptr[str1 + str2] = '\0';
	return (ptr);
}
