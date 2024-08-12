#include <stdio.h>
#include <math.h>

int main()
{
  long long num;
  long long auxiliar;
  int digitos;
  long long div;
  printf("dc:");
  scanf("%lld", &num);

  auxiliar = num;
  while (auxiliar != 0)
  {
    auxiliar /= 10;
    digitos++;
  }
  digitos = digitos - 2;
  div = pow(10, digitos);
  num = num / div;
  printf("%lld", num);
}
