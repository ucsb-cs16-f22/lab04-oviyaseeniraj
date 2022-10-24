#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
  int numPrimes = 0;

  for (int i = 0; i < size; i++)
  {
    if (isPrime(a[i]))
    {
      numPrimes++;
    }
  }

  return numPrimes;
}
