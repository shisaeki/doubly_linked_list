/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linked_list.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:24:08 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/10/03 15:06:39 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLY_LINKED_LIST_H
# define DOUBLY_LINKED_LIST_H

# include <stdio.h>
# include <stdlib.h>

typedef struct	s_node
{
	int				*data;
	struct s_node	*prev;
	struct s_node	*next;
}				t_node;

t_node*	init_list();
void	append_last(t_node *initial_node, int value);
void	append_first(t_node *initial_node, int value);
void	delete_last(t_node *initial_node);
void	delete_first(t_node *initial_node);
void	free_list(t_node *initial_node);

#endif