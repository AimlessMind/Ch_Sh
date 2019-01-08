#include "Ch_Sht_Gen.h"



void Stat_prin(t_character *X)
{
    printf("%s:%d\t mod:%d\t\t", X->attributes->Str->name, X->attributes->Str->value, X->attributes->Str->mod);
    printf("%s:%d\t mod:%d\n", X->attributes->Int->name, X->attributes->Int->value, X->attributes->Int->mod);
    printf("%s:%d\t mod:%d\t\t", X->attributes->Dex->name, X->attributes->Dex->value, X->attributes->Dex->mod);
    printf("%s:%d\t mod:%d\n", X->attributes->Wis->name, X->attributes->Wis->value, X->attributes->Wis->mod);
    printf("%s:%d\t mod:%d\t\t", X->attributes->Con->name, X->attributes->Con->value, X->attributes->Con->mod);
    printf("%s:%d\t mod:%d\n", X->attributes->Cha->name, X->attributes->Cha->value, X->attributes->Cha->mod);
}