#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct Palindromo {
	char caract;
	struct Palindromo *prox;
	struct Palindromo *ant;
} Palindromo;

Palindromo* lista_insere(Palindromo* lista, char c) {
  Palindromo* novo = (Palindromo*) malloc(sizeof(Palindromo));
  novo->caract = c;
  novo->prox = lista;
  novo->ant = NULL;
  /* verifica se lista não está vazia */
  if (lista != NULL)
     lista->ant = novo;
  return novo;
}
 void inverte (Palindromo* lista, char c, int tam ){
     int i;
     char *a;
     Palindromo*listainvertida,*primeiro,*ultimo;


   tam= strlen (tam);
  for (i=tam; i<0; i--){
       lista->ant = listainvertida->ant ;
  if (listainvertida  == lista)
  {
      printf ("Eh palindromo");
  }
  else
        printf ("Nao eh palindromo");
  }

 }


/*void  lst_imprime(Palindromo* lis){
  Palindromo* p;
  for(p = lis; p != NULL; p = p->prox){

	printf ( "%c",  p->caract ) ;
  }*/
void  lista_imprime(Palindromo* list){
  Palindromo* p;
  int lista;
  for(p = lista; p != NULL; p = p->prox){

	printf ( "%c",  p->caract ) ;
  }
}


int main (void){
int x;
Palindromo *list, *listainvertida;
char*n, *novo;




    printf ("Digite a palavra a ser verificada:");
    Palindromo* lista_insere(Palindromo* lista, char c);
    lista_imprime(&list);

    x=strlen(list);
    void  inverte (Palindromo* lista, char c, int tam );
    printf ("A palavra invertida :",listainvertida);

    return 0;}

