/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:12:33 by miturk            #+#    #+#             */
/*   Updated: 2023/09/04 17:12:36 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	const char	s[] = "Hello, World!";
	
	printf("%lu\n", ft_strlen(s));
	printf("%lu", strlen(s));
	return(0);
	
}*/