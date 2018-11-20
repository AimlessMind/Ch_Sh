#ifndef CH_SHT_GEN_H
# define CH_SHT_GEN_H
# include <stdlib.h>
# include <stdio.h>
# include <sys/time.h>
# include "z_libft/libft/libft.h"

typedef struct      s_tat
{
    char    *name;
    int     value;
    int     mod;
}                   t_stat;
typedef struct      s_pecial
{
    t_stat  *Str;
    t_stat  *Dex;
    t_stat  *Con;
    t_stat  *Int;
    t_stat  *Wis;
    t_stat  *Cha;
}                   t_special;
int     Die(int sides);
int     Roller(int sides, int multi);
void    Stat_Parse(t_special *New_Char, char type);
void    Stat_gen(t_stat *X, char *Y, char type);
void    Mem_allo(t_special **New_char);
void    Stat_prin(t_special *X);
void    Play();
void    Gen_Char(char type);
int		get_next_line(int fd, char **line);
int     ft_strcmp(const char *s1, const char *s2);
void	ft_putstr(const char *str);

#endif