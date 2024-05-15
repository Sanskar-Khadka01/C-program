#include<stdio.h>

int main(){
    int i,j,a[2][2],b[2][2],sum[2][2];
    printf("Enter first matrix element:\n");
    for(i=0;i<2;i++){
        for ( j = 0; j < 2; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter second matrix element:\n");
    for(i=0;i<2;i++){
        for ( j = 0; j < 2; j++)
        {
            printf("b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
    for(i=0;i<2;i++){
        for ( j = 0; j < 2; j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
        }
        
    }
    printf("Enter first matrix element:\n");
    for(i=0;i<2;i++){
        for ( j = 0; j < 2; j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}