/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <msnazarow@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 04:32:54 by sgertrud          #+#    #+#             */
/*   Updated: 2020/05/19 09:53:19 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*(char*)s++ == (char)c)
			return ((char*)(s - 1));
	}
	return (c == 0 ? (char*)s : 0);
}
