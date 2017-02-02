//
// Makefile for Makefile in /home/clement/Documents/libmy_extended/liblist/linked_list.h
//
// Made by LENOURS ClÃ©ment
// Login   <lenour_c@etna-alternance.net>
//
// Started on  Sat Oct 22 18:18:08 2016 LENOURS Clément
// Last update Sat Nov 12 12:17:00 2016 LENOURS Clément
//

#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__
#include <stdlib.h>

struct	l_node
{
	void *value;
	int index;
	struct l_node *next;
	struct l_node *prev;
};

typedef struct l_node node;

typedef struct
{
	node *first;
	node *last;
	int nb;
} l_list;

l_list	*create_list();
node	*create_node(void *value);
int	add_node(node *node, l_list *list);
int	rm_node(node *node, l_list *list);
int	rm_list(l_list *list);
node	*search_node_by_index(int index, l_list *list);
node	*search_node_by_value(void *value, l_list *list);
int	my_strcmp(char *s1, char *s2);

#endif
