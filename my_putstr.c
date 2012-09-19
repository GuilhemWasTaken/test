/*
** my_putstr.c for my_putstr in /home/faure_j//rendu/lib/my
** 
** Made by jordan faure
** Login   <faure_j@epitech.net>
** 
** Started on  Mon Oct 24 10:06:56 2011 jordan faure
** Last update Sun Nov 27 11:40:39 2011 jordan faure
*/

int	my_putstr(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}
