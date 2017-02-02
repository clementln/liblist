/*
** my_strcmp.c for my_strcmp in /home/clement/Documents/piscine/jc4/lenour_c/my_strcmp
** 
** Made by LENOURS Clément
** Login   <lenour_c@etna-alternance.net>
** 
** Started on  Fri Oct 21 10:35:11 2016 LENOURS Clément
** Last update Fri Oct 21 15:33:44 2016 LENOURS Clément
*/

int	my_strcmp(char *s1, char *s2)
{
  while (*s1 != '\0' || *s2 != '\0')
    {
      if (*s1 > *s2)
	return (1);
      if (*s1 < *s2)
	return (-1);
      s1++;
      s2++;
    }
  return (0);
}
