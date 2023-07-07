#include <stdio.h>
#include <stdlib.h>
 
void labSort(int x, int array[])
{
  int a, b, swap, tmp; 
  
  for (a = 0; a < x - 1; a++)
  {
    swap = 0; 
    for (b = 0; b < x - a - 1; b++)
    {
      if (array[b] > array[b + 1])
      {
        tmp = array[b]; 
        array[b] = array[b + 1]; 
        array[b + 1] = tmp; 
        swap++; 
      }
      
    }
    printf("Index:%d\tSwaps:%d\n", a, swap); 
  }
  
  

}

int main()
{
    int a[] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; 
    int num = sizeof(a) / sizeof(a[0]);  

    labSort(num, a); 

    return 0; 
}
