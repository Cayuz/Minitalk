/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 17:53:15 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/08 19:38:41 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
*/

static int	word_counter(char *s, char c)
{
	int	i;
	int	counter;
	int	check;

	i = 0;
	counter = 0;
	check = 1;
	while (s[i])
	{
		if (s[i] != c && check)
		{
			counter++;
			check = 0;
		}
		if (s[i] == c)
			check = 1;
		i++;
	}
	return (counter);
}

static int	char_counter(char *s, char c)
{
	int	i;
	int	char_count;

	i = 0;
	char_count = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			char_count++;
			if (s[i + 1] == c || s[i + 1] == '\0')
				return (char_count);
			i++;
		}
		i++;
	}
	return (char_count);
}

static char	*make_word(char *s, char c)
{
	int		char_count;
	char	*ptr;

	char_count = char_counter(s, c) + 1;
	ptr = ft_calloc(char_count, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, char_count);
	return (ptr);
}

static void	*free_it(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		word_count;
	int		c_count;
	char	**arrays;

	c_count = 0;
	i = 0;
	word_count = word_counter(s, c);
	arrays = ft_calloc(word_count + 1, sizeof(char *));
	if (arrays == NULL)
		return (NULL);
	while (i < word_count)
	{
		while (s[c_count] == c)
			c_count++;
		arrays[i] = make_word(s + c_count, c);
		if (arrays[i] == 0)
			return (free_it(arrays));
		s += char_counter(s, c) + c_count;
		c_count = 0;
		i++;
	}
	return (arrays);
}
