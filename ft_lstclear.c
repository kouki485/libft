/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohki <kkohki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:10:13 by kkohki            #+#    #+#             */
/*   Updated: 2021/10/13 11:13:41 by kkohki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*m;

	if (lst && *lst && del)
	{
		m = *lst;
		while (m)
		{
			ft_lstdelone(m, del);
			m = m->next;
		}
		*lst = 0;
	}
}
