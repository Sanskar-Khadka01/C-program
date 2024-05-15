#include <stdio.h>
int main(){
    int i, j, a, number[5];
    printf("Enter the numbers \n");
    for (i = 0; i <5; i++){
        scanf("%d", &number[i]);
    }
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (number[i] > number[j]){
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are\n");
    for (i = 0; i < 5; i++){
    printf("%d\t", number[i]);
    }
}  