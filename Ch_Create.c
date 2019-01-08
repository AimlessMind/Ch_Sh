#include "Ch_Sht_Gen.h"

void Gen_Char(char type, t_character *Player)
{
    char    *line;

    Stat_Parse(Player, type);
    Stat_prin(Player);
    while (1)
    {
        ft_putstr("$Playtest v1.0 𝔇ⁿ𝔇 Character Creation >");
        ft_putstr("\tName?\n");
        get_next_line(1, &line);
        Player->name = line;
        Player->lvl = 1;
        if (ft_strcmp(line, Player->name) == 0)
            break;
    }
    while (1)
    {
        ft_putstr("$Playtest v1.0 𝔇ⁿ𝔇 Character Creation >");
        ft_putstr("\tClass?\n");
        get_next_line(1, &line);
        if (ft_strcmp(line, "fighter") == 0)
            {
                Player->clas = line;
                Player->attributes->Str->value += 2;
                Player->attributes->Con->value += 1;
                Player->attributes->Str->mod = ((Player->attributes->Str->value / 2) - 5);
                Player->attributes->Con->mod = ((Player->attributes->Con->value / 2) - 5);
                break;
            }
        if (ft_strcmp(line, "rogue") == 0)
            {
                Player->clas = line;
                Player->attributes->Dex->value += 2;
                Player->attributes->Int->value += 1;
                Player->attributes->Dex->mod = ((Player->attributes->Dex->value / 2) - 5);
                Player->attributes->Int->mod = ((Player->attributes->Int->value / 2) - 5);
                break;
            }
        if (ft_strcmp(line, "wizard") == 0)
            {
                Player->clas = line;
                Player->attributes->Int->value += 2;
                Player->attributes->Wis->value += 1;
                Player->attributes->Int->mod = ((Player->attributes->Int->value / 2) - 5);
                Player->attributes->Wis->mod = ((Player->attributes->Wis->value / 2) - 5);
                break;
            }
        if (ft_strcmp(line, "cleric") == 0)
            {
                Player->clas = line;
                Player->attributes->Wis->value += 2;
                Player->attributes->Con->value += 1;
                Player->attributes->Wis->mod = ((Player->attributes->Wis->value / 2) - 5);
                Player->attributes->Con->mod = ((Player->attributes->Con->value / 2) - 5);
                break;
            }
        else if (ft_strcmp(line, "help") == 0)
            ft_putstr("new\nchar\nexit\n");
    }
}

/* Organizational function for base stats and providing information for Stat_gen */

void    Stat_Parse(t_character *Player, char type)
{
    Stat_gen(Player->attributes->Str, "Strength", type);
    Stat_gen(Player->attributes->Dex, "Dexterity", type);
    Stat_gen(Player->attributes->Con, "Constitution", type);
    Stat_gen(Player->attributes->Int, "Intelligence", type);
    Stat_gen(Player->attributes->Wis, "Wisdom", type);
    Stat_gen(Player->attributes->Cha, "Charisma", type);
} 

/* Assigns name for the stat, generates the value for the stat, finds the modifier */

void    Stat_gen(t_stat *X, char *Y, char type)
{
    X->name = Y;
    
    if (type == 'c')
        X->value = Roller(6, 3);
    else if (type == 'h')
    {
        int hero[4];
        int tmp;
        int i;

        i = 0;
        for (tmp = 0; tmp < 4; tmp++)
            hero[tmp] = Die(6);
        while (hero[0] < hero[1] || hero[1] < hero[2] || hero[2] < hero[3])
        {
            if (hero[i] >= hero[i + 1] && i < 4)
                i++;
            else if (hero[i] < hero[i + 1] && (i + 1) < 4)
            {
                tmp = hero[i];
                hero[i] = hero[i + 1];
                hero[i + 1] = tmp;
                i++;
            }
            else if (hero[0] < hero[1] || hero[1] < hero[2] || hero[2] < hero[3])
            { 
                i = 0;
            }
        }
        X->value = (hero[0] + hero[1] + hero[2]);
    }
    X->mod = ((X->value / 2) - 5);
}
