/*
** my_sort_int_tab.c for my_sort_int_tab in /home/faure_j//rendu/lib/my
** 
** Made by jordan faure
** Login   <faure_j@epitech.net>
** 
** Started on  Mon Oct 24 10:36:44 2011 jordan faure
** Last update Fri Oct 28 11:35:14 2011 jordan faure
*/
int	my_sort_int_tab(int *tab, int size)
{
  int	modif;
  int	pos;

  modif = 1;
  while (modif == 1)
    {
      pos = 0;
      modif = 0;
      while (pos < (size - 1))
	{      
	  if (tab[pos] > tab[pos + 1])
	    {
	      my_swap(tab + pos, tab + pos + 1);
	      modif = 1;
	    }
	  pos = pos + 1;
	}
    }
}
