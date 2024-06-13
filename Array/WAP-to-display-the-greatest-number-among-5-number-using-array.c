//WAP-to-arrange-5-number-in-decending-order-using-array
#include <stdio.h>
int main() {
  int i ,arr[5],great;
  for (int i = 0; i < 5; i++){
    printf("Enter number ");
    scanf("%d", &arr[i]);
  }
 great = arr[0];
  for(i = 0; i < 5; i++){
    if(great < arr[i]) {
      great = arr[i];
    }
  }
  printf("Greatest element = %d",great);
  return 0;
}
