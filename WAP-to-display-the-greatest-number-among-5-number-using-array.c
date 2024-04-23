#include <stdio.h>
int main() {
  int i ,arr[5],great;
  for (int i = 0; i < 5; i++) {
    printf("Enter number ");
    scanf("%d", &arr[i]);
  }
 great=arr[0];
  for (int i = 0 ; i < 5; i++) {
    if (great < arr[i]) {
      great= arr[i];
    }
  }

  printf("Greatest element = %d",great);

  return 0;
}
