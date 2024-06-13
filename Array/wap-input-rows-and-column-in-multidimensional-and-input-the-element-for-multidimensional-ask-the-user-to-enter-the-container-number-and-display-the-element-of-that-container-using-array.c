//WAP-input-rows-and-column-in-multidimensional-and-input-the-element-for-multidimensional-ask-the-user-to-enter-the-container-number-and-display-the-element-of-that-container-using-array
#include<stdio.h>
int main(){
    //input row and column
int r, c;
 printf("Enter row:");
 scanf("%d",&r);
 printf("Enter column:");
 scanf("%d",&c);
 //input element
 int i, j, a[r][c]; 
 printf("Enter matrix elements:\n");
 for(i=0;i< r;i++){
  for(j=0;j< c;j++){
   printf("a[%d][%d]=",i,j);
   scanf("%d", &a[i][j]);
  }
 }
//ask containerrow and container column
 int cR, cC;
 printf("Enter container row:(from 0 to %d); ",r-1); 
 scanf("%d",&cR);
 printf("Enter container column (from 0 to %d): ",c-1); 
 scanf("%d",&cC);
 if(cR >= 0 && cR < r && cC >= 0 && cC < c){
   printf("The element of container[%d][%d] is %d\t",cR,cC,a[cR][cC]);
 }
 else{
    printf("Invalid row and column");
 }
}