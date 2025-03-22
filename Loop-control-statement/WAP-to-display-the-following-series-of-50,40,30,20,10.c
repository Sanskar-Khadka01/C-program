//WAP to display the following series of 50,40,30,20,10. 
#include<stdio.h>
int main(){
    int i,n=50;
  
    for(i = 5 ;i >= 1; i--){
        printf("%d\t", n);
        n=n-10;
    }
    return 0;
}
