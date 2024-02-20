/*Para um dado n�mero inteiro n > 1, o menor inteiro d > 1 que divide n � chamado de fator
primo. � poss�vel determinar a fatora��o prima de n achando-se o fator primo d e
substituindo n pelo quociente n / d, repetindo essa opera��o at� que n seja igual a 1.
Utilizando um dos TDAs vistos em sala (Lista, Pilha ou Fila) para auxili�-lo na
manipula��o de dados, implemente um programa que compute a fatora��o prima de um
n�mero imprimindo os seus fatores em ordem decrescente. Por exemplo, para n=3960,
dever� ser impresso 11 * 5 * 3 * 3 * 2 * 2 * 2. Justifique a escolha do TDA utilizado. */




#include <stdio.h>
#include<stdlib.h>



int main()
{
  int n;       /* numero dado */
  int fator;   /* candidato a fator do numero dado */
  int mult;    /* multiplicidade de fator */


  printf("Decomponho um numero dado em fatores primos.\n");
  printf("Entre com o numero (> 1) a ser decomposto: ");
  scanf("%d", &n);
  printf("Decomposicao de %d em fatores primos:\n", n);

  fator = 2;
  while (n > 1)
    {
      mult = 0;
      while (n % fator == 0)
        {
          mult ++;
          n = n / fator;
        }
      if (mult != 0)
        {
          printf("  fator %d multiplicidade %d\n", fator, mult);
        }
      fator++;
    }

  return 0;
}
