#include <stdio.h>
#include <unistd.h>

int main()
{
  float dinheiro = 0;
  int moedas = 0;
  int troco = 0;

  do
  {
    printf("Dinheiro: ");
    scanf("%f", &dinheiro);
  } while (dinheiro < 0);

  troco = (dinheiro + 0.0001) * 100;
  moedas = troco / 25;
  printf("\nMoedas de 25: %d", troco / 25);
  troco %= 25;

  moedas = moedas + (troco / 10);
  printf("\nMoedas de 10: %d", troco / 10);
  troco %= 10;

  moedas = moedas + (troco / 5);
  printf("\nMoedas de 5: %d", troco / 5);
  troco %= 5;

  moedas = moedas + (troco);
  printf("\nMoedas de 1: %d", troco);

  printf("\n\nTotal de moedas: %d", moedas);
}
