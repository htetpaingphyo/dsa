#include <stdio.h>
#include <string.h>

struct user_struct
{
  char name[25];
  int age;
  bool is_active;
};

union user_union
{
  char name[25];
  int age;
};

int main()
{
  struct user_struct s_user;
  union user_union u_user;

  // we cannot directly assign string to char array
  strcpy(s_user.name, "John Doe");
  s_user.age = 30;
  printf("[Struct] Name: %s, Age: %d\n", s_user.name, s_user.age);

  strcpy(u_user.name, "John Doe");
  printf("[Union] Name: %s\n", u_user.name);

  // that will overwrite the "name" field in the union.
  u_user.age = 30;
  printf("[Union] Name: %s, Age: %d\n", u_user.name, u_user.age);

  return 0;
}
