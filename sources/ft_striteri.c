/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:07:24 by miturk            #+#    #+#             */
/*   Updated: 2024/10/06 06:26:52 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void    mycode(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = ft_toupper((int)*c);
    else
        *c = ft_tolower((int)*c);
}

int main(void)
{
    char s[] = "Hello, World!";
    printf("%s\n", s);
    ft_striteri(s, mycode);
    printf("%s\n", s);
    return (0);
}
*/