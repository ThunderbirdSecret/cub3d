/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsecret <tsecret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 20:15:25 by tsecret           #+#    #+#             */
/*   Updated: 2020/10/10 20:27:54 by tsecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list *res;

	if ((res = (t_list *)malloc(sizeof(t_list))))
	{
		if (!content)
		{
			res->content = NULL;
		}
		res->content = (void *)content;
		res->next = NULL;
	}
	return (res);
}
