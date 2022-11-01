#include <stdio.h>

int maximo(int *v, int n) {
  int aux;
  if(n == 1) return v[0];
  else {
    aux = maximo(v, n-1);
    if(aux > v[n-1]) {
      return aux;
    }else {
      return v[n-1];
    }
  }
  return 1;
}

int main(void) {
  int vetor[5] = {1, 3, 2, 17, 4};

  int maior = maximo(vetor, 5);
  printf("%d", maior);
  return 0;
}
