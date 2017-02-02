//
// Makefile for Makefile in /home/clement/Documents/libmy_extended/liblist/linked_list.c
//
// Made by LENOURS ClÃ©ment
// Login   <lenour_c@etna-alternance.net>
//
// Started on  Sat Oct 22 18:18:08 2016 LENOURS Clément
// Last update Sat Nov 12 12:17:00 2016 LENOURS Clément
//

#include "linked_list.h"

l_list		*create_list()
{
  l_list	*n_list;
  if ((n_list = malloc(sizeof(*n_list))) == NULL)
    return (NULL);
  n_list->nb = 0;
  return (n_list);
}

node		*create_node(void *value)
{
  node		*n_node;
  if ((n_node = malloc(sizeof(*n_node))) == NULL)
    return (NULL);
  n_node->value = value;
  return (n_node);
}

int		add_node(node *node, l_list *list) {
  if (list == NULL || node == NULL)
    return (1);
  if (list->nb == 0)
    {
      node->next = NULL;
      node->prev = NULL;
      list->first = node;
      list->last = node;
    }
  else
    {
      node->next = NULL;
      node->prev = list->last;
      list->last->next = node;
      list->last = node;
    }
  list->nb++;
  node->index = list->nb;
  return (0);
}

int rm_node(node *node, l_list *list)
{
  if (list == NULL || node == NULL || list->nb == 0)
    return (1);
  if (list->nb == 1)
    {
      list->first = NULL;
      list->last = NULL;
    }
  else if (list->first == node)
    {
      list->first = node->next;
      list->first->prev = NULL;
    }
  else if (list->last == node)
    {
      list->last = node->prev;
      list->last->next = NULL;
    }
  else
    {
      node->prev->next = node->next;
      node->next->prev = node->prev;
    }
  list->nb--;
  free(node);
  return (0);
}
