/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:07:10 by miturk            #+#    #+#             */
/*   Updated: 2024/10/06 06:27:28 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	printf("%d\n", ft_toupper('A'));
	printf("%d\n", ft_toupper('b'));
	printf("%d\n", ft_toupper('c'));
	printf("%d\n", ft_toupper(65));
	printf("%d\n", toupper('c'));
	return (0);
}*/
