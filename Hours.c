#include <stdio.h>
#include <math.h>

int main(void)
{
    
    //Treba da napravim program koji uzme 3 inputa od korisnika u vezi toga koliko je sati proveo programirajuci ove nedelje.
int w0;    
printf("week 0: ");
scanf("%i", &w0);

int w1;    
printf("week 1: ");
scanf("%i", &w1);

int w2;    
printf("week 2: ");
scanf("%i", &w2);
    
    //Onda trazim jos jedan input koji postavlja pitanje da li zelim "Average" ili "Total" sati koliko je proveo programirajuci.
char AoT;
printf("Average or Total? ");
scanf(" %c", &AoT);

if (AoT == 'A' || AoT == 'a')
{
    printf("%d", w0 + w1 + w2) / 3;
}
else if(AoT == 'T' ||AoT == 't')
{
    printf("%d", w0 + w1 + w2);
}
else
{
    printf("Valid input");
}    //I na kraju on pise tu vrednost.
}