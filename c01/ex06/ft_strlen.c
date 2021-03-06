/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:22:58 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/28 18:38:35 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	sum;

	sum = 0;
	while (*str != '\0')
	{
		sum++;
		str++;
	}
	return (sum);
}
