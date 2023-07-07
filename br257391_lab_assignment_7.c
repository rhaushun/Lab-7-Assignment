#include <stdio.h>
#include <stdlib.h>
 
void labSort(int x, int array[])
{
  int a, b, tmp; 
  int swap[x]; 

  for (int i = 0; i < x; i++)
  {
    swap[i] = 0; 
  }

  int sort = 0; 
  for (a = 0; a < x; a++)
  {
    sort = 1; 
    for (b = 0; b < x - a - 1; b++)
    {
      if (array[b] > array[b + 1])
      {
        tmp = array[b]; 
        array[b] = array[b + 1]; 
        array[b + 1] = tmp; 
        swap[b]++; 
        sort = 0; 
      }
      
    }
    
  }
  
  for (int i = 0; i < x; i++)
  {
    printf("Index:%d\tSwaps:%d\n", i, swap[i]); 
  }
   
}

int main()
{
    int a[] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; 
    int num = sizeof(a) / sizeof(a[0]);  

    labSort(num, a); 

    return 0; 
}