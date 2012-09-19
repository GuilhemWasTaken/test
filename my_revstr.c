/*
** my_revstr.c for my_revstr in /home/faure_j//rendu/lib/my
** 
** Made by jordan faure
** Login   <faure_j@epitech.net>
** 
** Started on  Mon Oct 24 09:51:59 2011 jordan faure
** Last update Mon Oct 24 09:53:04 2011 jordan faure
*/

char	*my_revstr(char *str)
{
  int	i;

  i = *str;
  while (str[i])
    {
      i = i - 1;
    }
}
