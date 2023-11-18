#include <stdio.h>

int main(void) {
  int id_monica, id_mais_velho;
  int id_f1, id_f2, id_f3;

   //printf("Digite idade da dona Mônica: ");
  scanf("%d", &id_monica);

 //printf("Digite idade do filho 1: ");
  scanf("%d", &id_f1);

  // printf("Digite idade do filho 2: ");
  scanf("%d", &id_f2);

  id_f3 = id_monica - id_f1 - id_f2;

  if (id_f1 > id_f2 && id_f1 > id_f3) {
    id_mais_velho = id_f1;
  } else if (id_f2 > id_f1 && id_f2 > id_f3) {
    id_mais_velho = id_f2;
  } else {
    id_mais_velho = id_f3;
  }

  // printf("Idade filho mais velho: %d", id_mais_velho);
  printf("%d  ", id_mais_velho);
  return 0;
}