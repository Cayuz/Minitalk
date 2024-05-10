/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 15:56:52 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/02/22 17:23:08 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/*
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		len;
	int		s1_len;
	int		i;

	i = 0;
	s1_len = ft_strlen(s1);
	len = s1_len + ft_strlen(s2);
	new = (char *)malloc(((len + 1) * sizeof(char)));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, s1_len + 1);
	while (s2[i])
	{
		new[i + s1_len] = s2[i];
		i++;
	}
	new[i + s1_len] = '\0';
	return (new);
}
