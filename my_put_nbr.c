/*
** my_put_nbr.c for my_put_nbr in /home/faure_j//works/rendu/piscine
** 
** Made by jordan faure
** Login   <faure_j@epitech.net>
** 
** Started on  Fri Oct 28 20:02:58 2011 jordan faure
** Last update Mon Oct 31 13:40:00 2011 jordan faure
*/

int	my_put_nbr(int nb)
{
  int	mod;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 0)
    {
      if (nb >= 10)
	{
	  mod = (nb % 10);
          nb = (nb - mod) / 10;
	  my_put_nbr(nb);
	  my_putchar(48 + mod);
        }
      else
        my_putchar(48 + nb % 10);
    }
}
