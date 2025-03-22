//WAP-to-input-element-for-martix-and-display-its-element-using-array
#include<stdio.h>
int main(){
int r, c;
 printf("Enter row:");
 scanf("%d",&r);
 printf("Enter column:");
 scanf("%d",&c);
 int i, j, a[r][c]; 
 printf("Enter matrix elements:\n");
 for(i=0;i< r;i++){
  for(j=0;j< c;j++){
   printf("a[%d][%d]=",i,j);
   scanf("%d", &a[i][j]);
  }
 }
 for(i=0;i< r;i++){
  for(j=0;j< c;j++){
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
}