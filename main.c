#include <stdio.h>

int main(void) {
  float numero;
  
  printf("Bienvenido al programa fachero del Facundo \n");
  printf("Por favor, escriba un número\n");
  scanf("%f", &numero);

  union DSF {
    float numero2;
    unsigned char espaciosF[4];
  }DSF;
  DSF.numero2 = numero;

  for(int i=0; i<4; i++){
  printf(" %x ---", DSF.espaciosF[i]);
  }
  return 0;
}