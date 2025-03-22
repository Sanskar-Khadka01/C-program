#include<stdio.h>
#define MAX_RESULTS 100

void displayResults(float results[],int size){
    printf("final result\n");
    for(int i = 0; i< size; i++ ){
        printf("Result[%d]=%.2f",i+1,results[i]);
    }
}

int main(){
    float results[MAX_RESULTS];
    int count = 0 ;
    char choice ;
    char operator;
    float n1 , n2 ,result;

    do{
        if(count == 0){
            printf("Enter first number ");
            scanf(" %f", &n1);
            printf("Enter an operator(+, -, * , /): ");
            scanf(" %c", &operator);
            printf("Enter second number ");
            scanf(" %f", &n2);
        }else{
            printf("Using the privious result: %.2f\n",results[count-1]);
            n1 = results[count-1];
            printf("Enter an operator(+, -, * , /): ");
            scanf(" %c", &operator);
            printf("Enter another number\n ");
            scanf(" %f",&n2);
        }
        switch (operator)
        {
        case '+': result = n1 + n2; break;
        case '-': result = n1 - n2; break;
        case '*': result = n1 * n2; break;
        case '/': if(n2!=0){result = n1 / n2;} else { printf("error! division by  0.\n"); continue;}break;
        
        default:
        printf("Invalid operator");
            continue;
        }
        results[count++]=result;
        printf("Calculation %.2f %c %.2f = %.2f\n",n1,operator,n2,result);
        printf("Do you want to continue(y/n)?");
        scanf(" %c",&choice);
        if(choice == 'y'|| choice =='Y'){
            printf("Do you want to continue same or start fresh  (y/n)");
            scanf(" %c",&choice);
            if(choice == 'n'|| choice=='N'){
                printf("Enter first number ");
                scanf("%f",&n1);
                printf("Enter an operator(+, -, * , /): ");
                scanf("%c",&operator);
                printf("Enter second number ");
                scanf(" %f",&n2);   
             } else{
                displayResults(results,count);
            
            }
        }

    } while (choice == 'y' || choice=='Y' );
    printf("\n Final result:\n");
    displayResults(results,count);
    return 0;
}
