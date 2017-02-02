//
// Makefile for Makefile in /home/clement/Documents/libmy_extended/liblist/linked_list2.c
//
// Made by LENOURS ClÃ©ment
// Login   <lenour_c@etna-alternance.net>
//
// Started on  Sat Oct 22 18:18:08 2016 LENOURS Clément
// Last update Sat Nov 12 12:17:00 2016 LENOURS Clément
//

#include "linked_list.h"

int	rm_list(l_list *list)
{
  if (list == NULL || list->nb == 0)
    return (1);
  while (list->first != NULL)
    rm_node(list->first, list);
  free(list);
  return (0);
}

node	*search_node_by_index(int index, l_list *list)
{
  node	*temp;
  if (list == NULL || list->nb == 0 || index > list->nb)
    return NULL;
  temp = list->first;
  while (temp->index != index)
    temp = temp->next;
  return (temp);
}

node	*search_node_by_value(void *value, l_list *list)
{
  node	*temp;

  if (list == NULL || list->nb == 0)
    return (NULL);
  temp = list->first;
  while (my_strcmp((char *)temp->value, (char *)value) != 0)
    temp = temp->next;
  return (temp);
}
