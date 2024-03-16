#include <stdio.h>
#include <stdlib.h>

int main(){
int opt_numb;
int size;
int i;
int randPC;
int P1_points=0;
int PC_points=0;

printf("Rock Paper Scissor Game:\n");
printf("Select Number Of Rounds:\n");
scanf("%d",&size);

for(i=0;i<size;i++)
{
    printf("Choose between Rock(0), Paper(1) or Scissor(2)\n");
    scanf("%d",&opt_numb);
    randPC= rand()%3;
    printf("COMBAT!:%d vs %d\n",opt_numb,randPC);

       if(opt_numb == randPC)
    {
        printf("Draw\n");
        printf("\n");
        printf("Score:%d - %d",P1_points,PC_points);
        printf("\n");
    }
        if(opt_numb==0 && randPC==1)
        {
              printf("PC Wins\n");
            PC_points++;
            printf("Score:%d - %d",P1_points,PC_points);
            printf("\n");
        }
        if(opt_numb==0 && randPC==2)
        {
           printf("Player1 Wins\n");
            P1_points++;
            printf("Score:%d - %d",P1_points,PC_points);
            printf("\n");
        }

        if(opt_numb==1 && randPC==0)
        {
           printf("Player1 Wins\n");
            P1_points++;
            printf("Score:%d - %d",P1_points,PC_points);
            printf("\n");
        }
        if(opt_numb==1 && randPC==2)
        {
            printf("PC Wins\n");
            PC_points++;
            printf("Score:%d - %d",P1_points,PC_points);
            printf("\n");
        }
        if(opt_numb==2 && randPC==0)
        {
            printf("PC Wins\n");
            PC_points++;
            printf("Score:%d - %d",P1_points,PC_points);
            printf("\n");
        }
        if(opt_numb==2 && randPC==1)
        {
            printf("Player1 Wins\n");
            P1_points++;
            printf("Score:%d - %d",P1_points,PC_points);
            printf("\n");
        }
}

return 0;
}
