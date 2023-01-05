#include <stdio.h>

int main() {
  int number;
  char name[20];

  printf("Enter a number: ");
  scanf("%d", &number);

  printf("Enter a name: ");
  scanf("%s", name);

  printf("You entered %d and %s.\n", number, name);

  return 0;
}
//scanf is used take input from user
