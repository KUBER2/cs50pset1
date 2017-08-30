#include <cs50.h>
#include <stdio.h>


int main(void)
{

    printf("Now tel my how higt marios piramide should be: ");
    int h = get_int();
    for(int i =1; i<=h;i++){
        for(int j=h;j>0;j--){
            if(j>i)
            printf(" ");
                else
            printf("#");

        }
        printf("\n");
    }

}