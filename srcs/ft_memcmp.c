/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapalmer <dapalmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:33:37 by dapalmer          #+#    #+#             */
/*   Updated: 2019/11/21 12:33:53 by dapalmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1;
	const unsigned char *p2;

	if (n != 0)
	{
		p1 = s1;
		p2 = s2;
		while (n-- != 0)
		{
			if (*p1++ != *p2++)
				return ((int)(*(--p1) - *(--p2)));
		}
	}
	return (0);
}
