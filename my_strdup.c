/*
** my_strdup.c for my_strdup in /home/faure_j//works/rendu/piscine_rattrapage/Jour_03PM/ex_01
**
** Made by jordan faure
** Login   <faure_j@epitech.net>
**
** Started on  Wed Dec 14 14:31:53 2011 jordan faure
** Last update Wed Dec 14 17:09:55 2011 jordan faure
*/

#include <stdlib.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int     my_strlen(char *str)
{
  int   len;

  len = 0;
  while (str[len])
    {
      len = len + 1;
    }
  return (len);
}

char    *my_strcpy(char *dest, char *src)
{
  int   i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}

char	*my_strdup(char *str)
{
  char	*s;

  if ((s = malloc(my_strlen(str))) == 0)
    {
      return (0);
    }
  my_strcpy(s, str);
  return (s);
}

int	main()
{
  char	*str;
  char	*s;

  str = "abc";
  s = my_strdup(str);
  my_putstr(s);
  free(s);
}
