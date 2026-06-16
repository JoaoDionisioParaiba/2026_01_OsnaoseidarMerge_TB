#include "funcao_divisao.h"
#include <stdio.h>

float dividir(float a, float b){
  if(b <= 0) { printf("Erro com denominador da operação"); return 1; };
  if (a/b <= 0) return 0;
  return a/b;
};
