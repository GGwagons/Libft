/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:07:33 by miturk            #+#    #+#             */
/*   Updated: 2024/10/06 06:25:44 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	return (0);
}
/*
int	main(void)
{
	unsigned char	str[] = "Hello\0";
	
	int	i;
	i = 0;
	while(str[i] != '\0')
	{
		printf("%d\n", ft_isalpha(str[i]));
		printf("%d\n", isalpha(str[i]));
		i++;
	}
	
	//printf("%d", isalpha(73));
	return(0);
}*/