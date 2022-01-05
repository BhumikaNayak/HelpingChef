#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int inputInteger;
    while(T)
        {
        scanf("%d",&inputInteger);
        if(inputInteger<10)
        {
            printf("Thanks for helping Chef!\n");
        }
        else
        {
            printf("-1\n");
        }
        T--;
        }
        return 0;
    }