//WAP-to-display-the-smallest-number-among-10-number-using-array
#include <stdio.h>
int main() {
  //input
  int i ,arr[10],small;
  for (int i = 0;i < 10; i++){
    printf("Enter number ");
    scanf("%d", &arr[i]);
  }
  //output 
 small=arr[0];
  for (int i = 0 ; i < 10; i++) {
    if (small > arr[i]) {
      small= arr[i];
    }
  }
  printf("smallest element = %d",small);
  return 0;
}
