//WAP-to-display-the-greatest-and-smallest-number-among-5-number-using-array
#include <stdio.h>
int main() {
  int i ,arr[5],great,small;
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
  small = arr[0];
  for(i = 0; i < 5; i++){
    if(small > arr[i]) {
      small = arr[i];
    }
  }
  printf("Greatest element = %d",great);
  printf("Smallest element = %d",small);
  return 0;
}
