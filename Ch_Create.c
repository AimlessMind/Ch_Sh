#include "Ch_Sht_Gen.h"

void Gen_Char(char type)
{
    t_special *New_Char;

    Mem_allo(&New_Char);
    Stat_Parse(New_Char, type);
    Stat_prin(New_Char);
}

/* Organizational function for base stats and providing information for Stat_gen */

void    Stat_Parse(t_special *New_Char, char type)
{
    Stat_gen(New_Char->Str, "Strength", type);
    Stat_gen(New_Char->Dex, "Dexterity", type);
    Stat_gen(New_Char->Con, "Constitution", type);
    Stat_gen(New_Char->Int, "Intelligence", type);
    Stat_gen(New_Char->Wis, "Wisdom", type);
    Stat_gen(New_Char->Cha, "Charisma", type);
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
        while (1)
        {
            if (hero[i] >= hero[i + 1] && i < 4)
                i++;
            else if (hero[i] < hero[i + 1] && i < 4)
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
            else if (hero[0] >= hero[1] && hero[1] >= hero[2] && hero[2] >= hero[3])
                break;
        }
        X->value = (hero[0] + hero[1] + hero[2]);
    }
    X->mod = ((X->value / 2) - 5);
}
