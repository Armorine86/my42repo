/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 09:35:32 by mmondell          #+#    #+#             */
/*   Updated: 2021/03/22 14:01:02 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	min;
	int	num;

	num = 0;
	min = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			min *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num * min);
}
