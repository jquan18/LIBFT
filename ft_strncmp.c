/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:36:17 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/10/28 14:36:17 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((!s1 && !s2) || n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i])
	{
		if (i == n - 1)
			return (0);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
