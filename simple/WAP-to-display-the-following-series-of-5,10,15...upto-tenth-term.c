//WAP to display the following series of 5,10,15...up to-tenth term
#include<stdio.h>
int main(){
    int i,n=5;
    for(i = 1 ;i <= 15; i++){
        printf("%d  ",n);
        n=n+5;
    }
    return 0;
}
