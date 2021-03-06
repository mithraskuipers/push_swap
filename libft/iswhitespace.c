/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iswhitespace.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/05 10:27:12 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/05/31 20:57:03 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	iswhitespace(int c)
{
	if ((c == ' ') || (c == '\t') || (c == '\v') || (c == '\r') || (c == '\n') \
	|| (c == '\f'))
		return (1);
	return (0);
}
