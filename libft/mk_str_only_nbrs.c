/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mk_str_only_nbrs.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/26 15:22:20 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/05/26 17:45:30 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	mk_str_only_nbrs(char *s)
{
	int	i;
	
	i = 0;
	if (s[i] == '-')
		i++;
	else if ((ft_isdigit(s[i]) != 1))
		return (0);
	while(s[i])
	{
		if (ft_isdigit(s[i]) != 1)
			return (0);
		i++;
	}
	return (1);
}
