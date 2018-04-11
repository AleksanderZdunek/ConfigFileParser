#ifndef ANIMAL_H
#define ANIMAL_H

#ifdef __cplusplus
class Animal
{
public:
  Animal(): age(0), height(0) {}
  Animal(int age, float height): age(age), height(height) {}
  virtual ~Animal() {};

  int getAge();
  void setAge(int new_age);

  float getHeight();
  void setHeight(float new_height);

private:
  int age;
  float height; //in metres!
};
#else
  struct Animal; // an opaque type
#endif

#ifdef __cplusplus
extern "C" {
#endif

  struct Animal* animal_create();
  struct Animal* animal_create_init(int age, float height);
  void animal_destroy(struct Animal* a);

  void animal_setage(struct Animal* a, int new_age);
  void animal_setheight(struct Animal* a, float new_height);
  int animal_getage(struct Animal* a);
  float animal_getheight(struct Animal* a);
#ifdef __cplusplus
}
#endif

#endif //ANIMAL_H
