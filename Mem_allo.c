#include "Ch_Sht_Gen.h"

/* Allocs memory for the Character's stat table */

void    Mem_allo(t_special **New_char)
{
    *New_char = (t_special*)malloc(sizeof(t_special));
    (*New_char)->Str = (t_stat*)malloc(sizeof(t_stat));
    (*New_char)->Dex = (t_stat*)malloc(sizeof(t_stat));
    (*New_char)->Con = (t_stat*)malloc(sizeof(t_stat));
    (*New_char)->Int = (t_stat*)malloc(sizeof(t_stat));
    (*New_char)->Wis = (t_stat*)malloc(sizeof(t_stat));
    (*New_char)->Cha = (t_stat*)malloc(sizeof(t_stat));
}