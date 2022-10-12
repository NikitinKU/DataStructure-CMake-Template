// Copyright 2022 Marina Usova

#include <stdio.h>
#include "../lib_example/example.h"
#include "../lib_addition/addition.h"

void main() {
  int a = 1, b = 4;
  float result;
  
  result = division(a, b);
  printf("%d / %d = %.2f\n", a, b, result);
  result = addition(a, b);
  printf("\n%d + %d = %.2f\n", a, b, result);
  
}
