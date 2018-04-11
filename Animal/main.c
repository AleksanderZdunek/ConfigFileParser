#include "animal.h"
#include <stdio.h>

int main()
{
  struct Animal* a = animal_create_init(25, 1.84);

  animal_setage(a, 26);
  printf("Age: %d\nHeight: %f\n", animal_getage(a), animal_getheight(a));

  animal_destroy(a);
  return 0;
}
