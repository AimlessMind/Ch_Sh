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
typedef struct      s_character
{
    char        *name;
    char        *clas;
    t_special   *attributes;
    int         lvl;
    int         HP;
}                   t_character;
int     Die(int sides);
int     Roller(int sides, int multi);
void    Stat_Parse(t_character *New_Char, char type);
void    Stat_gen(t_stat *X, char *Y, char type);
void    Mem_allo(t_character **New_char);
void    Stat_prin(t_character *X);
void    Play(t_character *Player);
void    Ch_Cr_Menu(t_character *Player);
void    Gen_Char(char type, t_character *Player);
int		get_next_line(int fd, char **line);
int     ft_strcmp(const char *s1, const char *s2);
void	ft_putstr(const char *str);
void    Ch_Detail_Menu(t_character *Player);
void	ft_putnbr(int n);
#endif