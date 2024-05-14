#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Poisson.h"
// poisson distribution int probability theory
double poisson(double lambda, int k) {
     return expl(-lambda) * powl(lambda, k) / tgamma(k + 1);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        perror("Error\n");
        exit(1);
    }

    double lambda = atof(argv[1]); // Parameter lambda (λ)
    int k = atoi(argv[2]);         // Value at which to compute the Poisson distribution

    double result = poisson(lambda, k);

    printf("Poisson distribution with lambda = %.2f and k = %d is: %.6f\n", lambda, k, result);

    return 0;
}
