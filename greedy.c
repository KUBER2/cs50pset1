#include <cs50.h>
#include <stdio.h>


int main(void)
{
    printf("O hai! How much change is owed? ");
    float m=get_float();
    while(m<0){
        printf("O hai! How much change is owed?");
        m=get_float();
    }
    int c=0;
    while(m>0){
        if(m>=0.25){
            m=m-0.25;
            printf("0,25 coins %i m=%f\n",c,m);
            c++;
        }
        if(m<0.25&&m>=0.10){
            m=m-0.10;
            printf("0,1 coins %i m=%f\n",c,m);
            c++;
        }
        if(m<0.1&&m>=0.05){
            m=m-0.05;
            printf("0,05 coins %i m=%f\n",c,m);
            c++;
        }
        if(m<0.05 && m>=0.01){
            m=m-0.01;
            printf("0,01 coins %i, m=%f\n",c,m);
            c++;
        }

    }
    printf("Number of coins: %i\n",c);



}