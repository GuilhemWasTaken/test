/*
** my_strcmp.c for strcmp in /home/faure_j//rendu/lib/my
**
** Made by jordan faure
** Login   <faure_j@epitech.net>
**
** Started on  Mon Oct 31 15:42:03 2011 jordan faure
** Last update Sat Jan  7 08:27:19 2012 jordan faure
*/

int	my_strcmp(char *s1, char *s2)
{
  if (s1[0] == s2[0])
    {
      if (s1[0] == '\0')
	return (0);
      return (my_strcmp(s1 + 1, s2 + 1));
    }
  else
    return (s1[0] - s2[0]);
}
