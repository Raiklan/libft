/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:17:59 by exam              #+#    #+#             */
/*   Updated: 2019/10/13 17:27:48 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_next_sep(const char *s1, char c)
{
	int			i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

static char	*ft_strddup(char *str, int n)
{
	char		*dest;
	int			i;

	i = 0;
	if (!(dest = malloc(sizeof(char) * n + 1)))
		return (NULL);
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_count(char *str, char charset)
{
	int			i;
	int			j;
	int			count;

	i = 0;
	count = 0;
	while (str[i])
	{
		j = find_next_sep(&str[i], charset);
		if (j > 0)
		{
			count++;
		}
		else if (j == -1)
		{
			count++;
			j = 1;
			break ;
		}
		i += j + 1;
	}
	return (count);
}

char		**ft_split(char const *str, char charset)
{
	size_t		i;
	size_t		n;
	char		*st;
	char		**re;

	i = 0;
	n = 0;
	st = (char *)str;
	if (!(re = malloc(sizeof(char *) * ft_count(st, charset) + 1)))
		return (NULL);
	while (i < ft_strlen(st))
	{
		if (find_next_sep(&st[i], charset) > 0)
			re[n++] = ft_strddup(&st[i], find_next_sep(&st[i], charset));
		else if (find_next_sep(&st[i], charset) == -1)
		{
			re[n++] = ft_strddup(&st[i], ft_strlen(st));
			break ;
		}
		i += find_next_sep(&st[i], charset) + 1;
	}
	re[n] = NULL;
	return (re);
}
