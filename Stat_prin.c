#include "Ch_Sht_Gen.h"



void Stat_prin(t_special *X)
{
    printf("%s:%d\t mod:%d\t\t", X->Str->name, X->Str->value, X->Str->mod);
    printf("%s:%d\t mod:%d\n", X->Int->name, X->Int->value, X->Int->mod);
    printf("%s:%d\t mod:%d\t\t", X->Dex->name, X->Dex->value, X->Dex->mod);
    printf("%s:%d\t mod:%d\n", X->Wis->name, X->Wis->value, X->Wis->mod);
    printf("%s:%d\t mod:%d\t\t", X->Con->name, X->Con->value, X->Con->mod);
    printf("%s:%d\t mod:%d\n", X->Cha->name, X->Cha->value, X->Cha->mod);
}