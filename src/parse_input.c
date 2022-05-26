/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_input.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/05 15:27:24 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/05/26 17:42:21 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_input(char **argv, t_env *env)
{
	int		i;
	int		j;
	int		val;
	char	**splitted_args;

	i = 1;
	while (argv[i])
	{
		splitted_args = ft_split(argv[i], ' ');
		if (splitted_args == NULL)
			exit(1);
		j = 0;
		while (splitted_args[j])
		{
			if ((mk_atoi(splitted_args[j], &val) == -1) || \
			(mk_str_only_nbrs(splitted_args[j]) == 0))
				msg_exit("Error", 1);
			ps_addlast(&env->stack_a, ps_new_element(-1, val));
			j++;
		}
		dp_clean_char(splitted_args);
		i++;
	}
}
