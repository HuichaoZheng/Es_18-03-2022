#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int data, giorno, mese, anno, x;
    if (argc != 2 || strlen(argv[1]) != 8)
    {
        return -1;
    }
    data = atoi(argv[1]);
    giorno = data / 1000000;
    mese = data / 10000 % 100;
    anno = data % 10000;
    if (mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10 || mese == 12)
    {
        x = 31;
    }
    else
    {
        if (mese == 2)
        {
            if (anno % 4 == 0)
            {
                if (anno % 100 == 0)
                {
                    if (anno % 400 == 0)
                        x = 29;
                    else
                        x = 28;
                }
                else
                    x = 29;
            }
            else
                x = 28;
        }
        else
        {
            x = 30;
        }
    }
    if (giorno > 0 && giorno <= x && mese > 0 && mese <= 12 && anno >= 1900 && anno <= 2021)
    {
        printf("%d/%d/%d", giorno, mese, anno);
    }
    else
    {
        printf("Data inserita errata!");
    }
    return 0;
}