#include "Ch_Sht_Gen.h"
#include "z_libft/libft/libft.h"

/*intializing the continued while loop to start my continued program
prototype v1.0
*/

void Play(t_character *Player)
{
    char *line;

    while(1)
    {
        ft_putstr("$Playtest v1.0 𝔇ⁿ𝔇 > ");
        get_next_line(1, &line);
        if (ft_strcmp(line, "new") == 0)
            Ch_Cr_Menu(Player);
        else if (ft_strcmp(line, "char") == 0)
            Ch_Detail_Menu(Player);
        else if (ft_strcmp(line, "exit") == 0)
            break;
        else if (ft_strcmp(line, "help") == 0)
            ft_putstr("new\nchar\nexit\n");
    }
}

void    Ch_Cr_Menu(t_character *Player)
{
    char *line;

    while(1)
    {
        ft_putstr("$Playtest v1.0 𝔇ⁿ𝔇 Character Creation > ");
        get_next_line(1, &line);
        if (ft_strcmp(line, "Classic") == 0)
        {
            Gen_Char('c', Player);
            break;
        }
        else if (ft_strcmp(line, "Heroic") == 0)
        {
            Gen_Char('h', Player);
            break;
        }
        else if (ft_strcmp(line, "exit") == 0)
            break;
        else if (ft_strcmp(line, "help") == 0)
            ft_putstr("Classic\nHeroic\nexit\n");
    }
}

void    Ch_Detail_Menu(t_character *Player)
{
            ft_putstr("Name:");
            ft_putstr(Player->name);
            ft_putstr("\n");
            ft_putstr("Level:");
            ft_putnbr(Player->lvl);
            ft_putstr("\n");
            Stat_prin(Player);
}

int main()
{
    t_character *Player;

    Mem_allo(&Player);
    srand((unsigned int)time(NULL));
    Play(Player);
    return (0);
}