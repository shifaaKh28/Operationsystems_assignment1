#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "poisson.h"

double poisson(double lambda, int k) {
     return expl(-lambda) * powl(lambda, k) / tgamma(k + 1);
}
