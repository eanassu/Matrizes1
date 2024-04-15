#include <stdio.h>

int main(void) {
  int matriz[4][3];

  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Digite o valor da posição [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  /* impressão da matriz */
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}