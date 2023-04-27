#include<stdio.h>
int main() {
    int arr [] = {5,6,12,11, 56};
    for (int i = 0; i < 5; i++);
    printf ("%d",arr[1]);
      
      printf ("\n");
      int min = arr [0];
      for (int i = 0; i < 5; i++) {
     if (arr[i] < min)
     min = arr [i];
      }
     printf ("Minimum: %d", min);
     
    

    return 0;
} 
