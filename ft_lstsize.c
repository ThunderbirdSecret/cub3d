/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsecret <tsecret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 20:15:59 by tsecret           #+#    #+#             */
/*   Updated: 2020/10/10 20:27:54 by tsecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		sz;
	t_list	*head;

	if (!lst)
		return (0);
	sz = 0;
	head = lst;
	while (head->next != NULL)
	{
		sz++;
		head = head->next;
	}
	if (head->next == NULL)
		sz++;
	return (sz);
}
