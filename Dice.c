#include "Ch_Sht_Gen.h"

/* Die is a psuedorandom number generator that creates the results of
** die of [int sides] */

int Die(int sides)
{
    int num;
    num = (rand() % sides + 1);
    return (num);
}

/* Roller simulates multiple rolls of the [int sides] Die
** by [int multi] times */

int Roller(int sides, int multi)
{
    int value;

    value = 0;
    while(multi > 0)
    {
        value += Die(sides);
        multi--;
    }
    return (value);
}