#include<stdio.h>
int main(){
    int i, j, pri,e ;
    printf("prime number from 5 to 1000 \n");
    for ( i = 5; i <= 1000 ; i++)
    {
        pri = 1;
        for ( j= 2; j * j<= i ; j++)
        {
            if (i % j == 0){
                pri = 0;
                break;
            }
        }
        if(pri){
            printf("%d ",i);
        }
        
    }
    printf("\n");
    return 0;
}