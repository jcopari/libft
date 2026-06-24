/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 18:56:59 by jcopari-          #+#    #+#             */
/*   Updated: 2026/06/22 19:05:06 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H




//##### Linked List.

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next; 
}	t_list;

t_list *ft_lstnew(void *content);

#endif 