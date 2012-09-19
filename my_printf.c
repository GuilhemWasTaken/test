/*
** my_printf.c for my_printf in /home/faure_j//works/rendu/TP/my_printf
** 
** Made by jordan faure
** Login   <faure_j@epitech.net>
** 
** Started on  Sun Nov 20 11:01:17 2011 jordan faure
** Last update Tue Nov 22 12:57:42 2011 jordan faure
*/

#include <stdarg.h>
#include <stdio.h>

void	optn(const char *format, int t, va_list ap)
{
  if (format[t] == 'd' || format[t] == 'i')
    {
      my_put_nbr(va_arg(ap, int));
    }
  else if (format[t] == 'c')
    {
      my_putchar(va_arg(ap, int));
    }
  else if (format[t] == 's')
    {
      my_putstr(va_arg(ap, char *));
    }
}

int	my_printf(const char *format, ...)
{
  va_list ap;
  int	t;

  t = 0;
  va_start(ap, format);
  while (format[t] != '\0')
    {
      if (format[t] == '%')
	{
	  t = t + 1;
	  optn(format, t, ap);
	}
      else
	{
	  my_putchar(format[t]);
	}
      t = t + 1;;
    }
  va_end(ap);
  return (0);
}
