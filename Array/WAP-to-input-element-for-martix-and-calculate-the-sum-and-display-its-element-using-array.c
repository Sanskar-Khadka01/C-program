#include<stdio.h>
int main(){
    int r, c, i, j, a[10][10], b[10][10], sum[10][10];
    printf("Enter  matrix row \n");
    scanf("%d", &r);
    printf("Enter matrix colume:\n");
    scanf("%d", &c);
 //puting the value in matrix element
    printf("Enter first matrix element:\n");
    for(i = 0; i < r; i++){
        for ( j = 0; j < c; j++)
        {
            printf("a[%d][%d]", i, j );
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrix element:\n");
    for(i = 0; i < r; i++){
        for ( j = 0; j < c; j++)
        {
            printf("b[%d][%d]", i, j);
            scanf("%d",&b[i][j]);
        }
    }
    // finding the sum of matrix element
    for(i = 0;i < r ; i++){
        for ( j = 0; j < c; j++)
        {
           sum[i][j] = a[i][j] + b[i][j];
        }
    }
    //displaying the result
    printf("sum of matrix element:\n");
    for(i=0; i < r; i++){
        for ( j = 0; j < c; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}