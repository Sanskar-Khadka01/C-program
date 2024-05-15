#include<stdio.h>
int main(){
 int i,j, a[4][3];
 printf("Enter matrix elements:\n");
 for(i=0;i< 4;i++){
  for(j=0;j< 3;j++){
   printf("a[%d][%d]=",i,j);
   scanf("%d", &a[i][j]);
  }
 }
 printf("Matrix is:\n");
 for(i=0;i< 4;i++){
  for(j=0;j< 3;j++){
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
 return 0;
}