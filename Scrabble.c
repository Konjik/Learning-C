#include <string.h>
#include <ctype.h>
#include <stdio.h>

int compute_score(char word[]);

int points[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int main(void){
    
    char sw1[100];

    printf("Enter the first sentence: ");
    scanf("%s", sw1);

    char sw2[100];
    
    printf("Enter the second sentence: ");
    scanf("%s", sw2);

    int sc1 = compute_score(sw1);
    int sc2 = compute_score(sw2);

    if(sc1 > sc2){
        printf("The first sentence has more points than the second sentence.\n");
    }else if(sc1 < sc2){
        printf("The second sentence has more points than the first sentence.\n");
    }else{
        printf("The two sentences have the same points.\n");
    }
    
}

int compute_score(char word[])
{
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (isalpha(word[i]))
        {
            score += points[toupper(word[i]) - 'A'];
        }
    }
    return score;
}