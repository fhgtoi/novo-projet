#include <stdio.h>

int main() {
  float distancia,volume,consumo;

  printf("Distancia percorrida eh de (km): \n");
  scanf("%f", &distancia);

  printf("Volume gasto de combustivel (l): \n");
  scanf("%f", &volume);

  consumo = distancia/volume;
  
  printf("Seu consumo medio eh de: \n");
  printf("%.3f km/l\n", consumo);

  if (volume == 0) {
    printf("Seu carro eh uma bicicleta!\n");
  }
  else {
    printf("Seu carro nao eh uma bicicleta!\n");
  }

  printf("Obrigado por usar nossos servicos!\n");

  return(0);
}
