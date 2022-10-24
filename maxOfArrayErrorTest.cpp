#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int arraySizeZero[] = {};
  assertEquals (0,
                maxOfArray(arraySizeZero, 0),
                "maxOfArray(arraySizeZero, 0)");
  return 0;

}
