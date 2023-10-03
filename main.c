/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:25:12 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/10/03 15:09:59 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "doubly_linked_list.h"

void	print_list(t_node *initial_node)
{
	t_node	*tmp;

	tmp = initial_node->next;
	while (tmp->data != NULL)
	{
		printf("%d\n", *(tmp->data));
		tmp = tmp->next;
	}
}

int main()
{
	t_node	*initial_node;
	
	// init list
	initial_node = init_list();
	//append and delete nodes
	append_last(initial_node, 1);
	append_last(initial_node, 2);
	delete_last(initial_node);
	append_last(initial_node, 3);
	append_last(initial_node, 4);
	delete_first(initial_node);
	append_last(initial_node, 5);
	append_last(initial_node, 6);
	append_first(initial_node, 0);
	delete_last(initial_node);
	//print list
	print_list(initial_node);
	//free list
	free(initial_node);

	//expected result: 0 3 4 5
	return (0);
}
