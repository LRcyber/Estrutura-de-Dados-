#include <stdio.h>
#include <stdlib.h>
typedef struct lista2 {
	char caract;
	struct lista2 *prox;
	struct lista2 *ant;
} Lista2;

Lista2* lst_insere(Lista2* lis, char c) {
  Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
  novo->caract = c;
  novo->prox = lis;
  novo->ant = NULL;
  /* verifica se lista não está vazia */
  if (lis != NULL)
     lis->ant = novo;
  return novo;
}
void  lst_imprime(Lista2* lis){
  Lista2* p; /*variável auxiliar para percorrer a 		lista */
  for(p = lis; p != NULL; p = p->prox){

	printf ( "%c",  p->caract ) ;
  }
}
int ehPalindromo (char *n) {
     int aux1, x = 0;

     aux1 = inverte(n, strlen(n), x);

     if (aux1 == 1) printf("Eh palindromo");

     else printf("Nao eh palindromo");

 }


int main()
{
    Lista2* lista = NULL;
    lista = lst_insere(lista,'a');
    lista = lst_insere(lista,'r');
    lista = lst_insere(lista,'a');
    lista = lst_insere(lista,'r');
    lista = lst_insere(lista,'a');

    Lista2* listaAux = NULL;
    listaAux = lst_insere(listaAux,'a');
    listaAux = lst_insere(listaAux,'r');
    listaAux = lst_insere(listaAux,'a');
    listaAux = lst_insere(listaAux,'r');
    lst_imprime(lista);
    if (ehPalindromo(lista)) {
        printf(" eh um palindromo\n");
    } else {
        printf(" nao eh um palindromo\n");
    }
    lst_imprime(listaAux);
     if (ehPalindromo(listaAux)) {
        printf(" eh um palindromo\n");
    } else {
        printf(" nao eh um palindromo\n");
    }
    return 0;
}
