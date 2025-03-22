#include<stdio.h>
int main(){
    int n ,rev,rem,ori;
    printf("palindrome number from 100 to 1000 \n");
    for (n=100;  n <= 1000; n++)
    {
        ori = n;
        rev = 0;
        while (n !=0)
        {
            rem=n%10;
            rev=rev * 10 + rem;
            n /= 10;
        }
        if(ori==rev){
            printf("%d ",ori);
        }
        n = ori ;
    }
    printf("\n");
    return 0;
}