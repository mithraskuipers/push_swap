/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cmd_rotate.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/05 16:00:03 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/05/10 19:01:49 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **head)
{
	t_stack *tmp;

	tmp = pop_node_front(head);
	add_node_back(head, tmp);
	write(1, "ra\n", 3);
}

void	rotate_b(t_stack **head)
{
	t_stack *tmp;

	tmp = pop_node_front(head);
	add_node_back(head, tmp);
	write(1, "rb\n", 3);
}

void	rotate_s(t_stack **head1, t_stack **head2)
{
	t_stack *tmp;

	tmp = pop_node_front(head1);
	add_node_back(head1, tmp);
	tmp = pop_node_front(head2);
	add_node_back(head2, tmp);
	write(1, "rs\n", 3);
}
