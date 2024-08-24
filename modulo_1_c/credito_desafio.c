// Escadas do Mario

#include <stdio.h>

int main()
{
  long long cartao;
  printf("Insira um numero de cartao de credito: ");
  scanf("%lld", &cartao);

  int digitos = 0;
  int soma = 0;
  int alternar = 0;
  long long auxiliar = cartao;

  while (auxiliar > 0)
  {
    int digito = auxiliar % 10;
    auxiliar /= 10;
    digitos++;

    if (alternar)
    {
      digito *= 2;
      if (digito > 9)
        digito -= 9;
    }
    soma += digito;
    alternar = !alternar;
  }

  if (soma % 10 == 0 && (digitos == 13 || digitos == 15 || digitos == 16))
  {
    if ((digitos == 13 || digitos == 16) && (cartao / 1000000000000 == 4 || cartao / 1000000000000000 == 4))
    {
      printf("VISA\n");
    }
    else if (digitos == 15 && (cartao / 10000000000000 == 34 || cartao / 10000000000000 == 37))
    {
      printf("AMERICAN EXPRESS\n");
    }
    else if (digitos == 16 && (cartao / 100000000000000 >= 51 && cartao / 100000000000000 <= 55))
    {
      printf("MASTERCARD\n");
    }
    else
    {
      printf("INVALIDO\n");
    }
  }
  else
  {
    printf("INVALIDO\n");
  }

  return 0;
}
