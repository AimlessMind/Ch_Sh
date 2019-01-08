#include "Ch_Sht_Gen.h"

/* Allocs memory for the Character's stat table */

void    Mem_allo(t_character **Player)
{
    *Player = (t_character*)malloc(sizeof(t_character));
    (*Player)->attributes = (t_special*)malloc(sizeof(t_special));
    (*Player)->attributes->Str = (t_stat*)malloc(sizeof(t_stat));
    (*Player)->attributes->Dex = (t_stat*)malloc(sizeof(t_stat));
    (*Player)->attributes->Con = (t_stat*)malloc(sizeof(t_stat));
    (*Player)->attributes->Int = (t_stat*)malloc(sizeof(t_stat));
    (*Player)->attributes->Wis = (t_stat*)malloc(sizeof(t_stat));
    (*Player)->attributes->Cha = (t_stat*)malloc(sizeof(t_stat));
}