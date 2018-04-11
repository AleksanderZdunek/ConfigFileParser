#include "animal.h"
#include <iostream>

int main()
{
  Animal* a = new Animal(25, 1.83);
  a->setAge(26);
  std::cout << "Age: " << a->getAge() << "\nHeight: " << a->getHeight() << std::endl;

  delete a;
  return 0;
}
