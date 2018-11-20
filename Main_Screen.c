#include "Ch_Sht_Gen.h"
#include "z_libft/libft/libft.h"

/*intializing the continued while loop to start my continued program
prototype v1.0
*/

void Play()
{
    char *line;

    //printf("$Playtest v1.0");
    while(1)
    {
        ft_putstr("$Playtest v1.0 𝔇ⁿ𝔇 > ");
        get_next_line(1, &line);
        if (ft_strcmp(line, "new") == 0)
        {
            while(1)
            {
                ft_putstr("$Playtest v1.0 𝔇ⁿ𝔇 >\n");
                ft_putstr("\tClassic or Heroic?\n");
                get_next_line(1, &line);
                if (ft_strcmp(line, "Classic") == 0)
                {
                    Gen_Char('c');
                    break;
                }
                else if (ft_strcmp(line, "Heroic") == 0)
                {
                    Gen_Char('h');
                    break;
                }
                else if (ft_strcmp(line, "back") == 0)
                    break;
            }
        }
        else if (ft_strcmp(line, "exit") == 0)
            break;
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    Play();
    return (0);
}