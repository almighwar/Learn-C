#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *awal;
  char *akhir;

  printf("Your first name: ");
  scanf("%ms", &awal);
  printf("Enter your last name: ");
  scanf("%ms", &akhir);

  printf("Bruh %s %s!\n", awal, akhir);

  free(awal);
  free(akhir);
}
