#include <stdio.h>
#include "poisson.h"

int main(){
   int lambda[5] = {3, 4, 5, 6, 7};
   int k[5] = {1, 2, 4, 6, 10};

   for (int i = 0; i < 5; i++){
    printf("time: %d, lambda's value: %d, k's value: %d, Poisson value: %lf \n", i, lambda[i], k[i], poisson(lambda[i], k[i]));
   }

   return 0;  
}
