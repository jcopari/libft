/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 19:06:55 by jcopari-          #+#    #+#             */
/*   Updated: 2026/06/27 18:14:23 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
    t_list *node; 
    
    node = malloc(sizeof(t_list));
    if(!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}

int main(void)
{
    t_list *meu_no = ft_lstnew("texto");
    printf("%s\n", (char *)meu_no->content);
    return 0;
}