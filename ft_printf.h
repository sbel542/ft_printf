#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_puthex(unsigned int n, const char specifier);
int		ft_putpointer(void *ptr);
int		ft_putchar(int c);
int		ft_putunint(unsigned int nb);
int		ft_putnbr(int nb);

#endif
