/*
** my_getnbr.c for my_getnbr in /home/faure_j//rendu/lib/my
** 
** Made by jordan faure
** Login   <faure_j@epitech.net>
** 
** Started on  Mon Oct 24 10:43:53 2011 jordan faure
** Last update Mon Oct 24 11:25:30 2011 jordan faure
*/

int	my_getnbr(char *str)
{
  int	pos;
  int	signe;
  int	nbr;

  signe = 1;
  pos = 0;
  while (str[pos] != '\0' && (str[pos] == '+' || str[pos] == '-'))
    {
      if (str[pos] == '-')
	{
	  signe = signe * - 1;
	}
      pos = pos + 1;
    }
  str = str + pos;
  nbr = 0;
  pos = 0;
  while (str[pos] >= '0' && str[pos] <= '9')
    {
      nbr = nbr * 10;
      nbr = nbr - (str[pos] - '0');
      pos = pos + 1;
    }
  return (nbr * signe * - 1);
}
