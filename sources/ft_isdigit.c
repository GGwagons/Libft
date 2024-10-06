/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 08:28:31 by miturk            #+#    #+#             */
/*   Updated: 2024/10/06 06:25:54 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	return (0);
}
/*
int	main(void)
{
	int	test;
	test = 55;

	printf("%d\n", isdigit(test));
	printf("%d", ft_isdigit(test));
	return(0);
}*/
