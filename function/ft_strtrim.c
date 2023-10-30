/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchin@student.42kl.edu.my <juchin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:47:35 by juchin@stud       #+#    #+#             */
/*   Updated: 2023/10/28 16:52:43 by juchin@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	size_t	strlen;

	end = ft_strlen(s1);
	while (s1[start])
	{
		if (ft_strchr(set, s1[start]) == NULL)
			break ;
		start++;
	}
	while (end > start)
	{
		if (ft_strchr(set, s1[end - 1]) == NULL)
			break ;
		end--;
	}
	strlen = end - start + 1;
	str = (char *)malloc(sizeof(char) * strlen);
	if (str == NULL)
		return (NULL);
	str = ft_substr(s1, start, strlen);
	return (str);
}
