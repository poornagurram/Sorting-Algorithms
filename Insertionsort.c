#include <stdio.h>
 
int main()
{
  int size, array[100], i, d, temp ;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 //read the array
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
 // to go through the entire list
  for (i = 1 ; i <= n - 1; i++) {
    d = i;   // to retain the current position of pass
 //to go through the sorted portion and swap if condition is not satisfied 
    while ( d > 0 && array[d] < array[d-1]) {
      temp          = array[d];
      array[d]   = array[d-1];
      array[d-1] = temp;
 
      d--; // to iterate through the sorted part
    }
  }
 
  printf("Sorted list \n");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }
 
  return 0;
}
