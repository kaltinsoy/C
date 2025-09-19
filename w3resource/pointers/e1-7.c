#include <stdio.h>

int main(void)
{
  puts("Input the number of elements to store in the array: ");
  int arr = 0;
  scanf("%d", &arr);
  int nums[arr] = {};

  for(size_t j = 0; j < arr; j++) {
    printf("For Element %d enter num!\n", j);
    int num = 0;
    scanf("%d", &num);
    nums[j] = num;
  }
  
  for(size_t j = 0; j < arr; j++) {
    printf("Element %d = %d\n", j, nums[j]);
  }
  return 0;
}
