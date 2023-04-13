/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:27 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/13 22:41:11 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			c;
	unsigned char	*d1;
	unsigned char	*d2;

	c = 0;
	d1 = (char *) s1;
	d2 = (char *) s2;

	while (c < n && d1[c] == d2[c])
	{
		c++;
	}
	if (c == n)
		return (0);
	else
		return (d1[c] - d2[c]);
}
