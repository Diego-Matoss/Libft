/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 21:08:49 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/24 21:08:52 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *ptr, int ch, size_t count)
{
	unsigned char *p;
	size_t i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < count)
	{
		if (p[i] == (unsigned char)ch)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	char *str = "Hola mundo";
	int c = 'a';
	int n = 2;
	void *ptr;
	ptr = memchr(str, c, n);
	printf("%s\n", (char *)ptr);
	ptr = ft_memchr(str, c, n);
	printf("%s\n", (char *)ptr);
	return 0;
} */