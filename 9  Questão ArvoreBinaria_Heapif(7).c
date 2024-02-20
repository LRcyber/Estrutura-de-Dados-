/*Escreva uma função chamada Heapify que receba os parâmetros:
(i) referência para vetor de inteiros; (ii) tamanho do vetor;
(iii) inteiro tipo. Sua função deve converter o vetor em um Heap, sendo que,
se o parâmetro “(iii) tipo” for 1, será convertido em MinHeap,
mas se o parâmetro for igual a 2, transformar em um MaxHeap.*/

#include<stdio.h>
#include<stdlib.h>



void alocaVet ( int *V, int tam){
 V = malloc(sizeof(tam));
 if (V==NULL)
    printf ("Erro!");

}
void peneira(int *vet, int raiz, int fundo) {
	int pronto, filhoMax, tmp;

	pronto = 0;
	while ((raiz*2 <= fundo) && (!pronto)) {
		if (raiz*2 == fundo) {
			filhoMax = raiz * 2;
		}
		else if (vet[raiz * 2] > vet[raiz * 2 + 1]) {
			filhoMax = raiz * 2;
		}
		else {
			filhoMax = raiz * 2 + 1;
		}

	if (vet[raiz] < vet[filhoMax]) {
		tmp = vet[raiz];
		vet[raiz] = vet[filhoMax];
		vet[filhoMax] = tmp;
		raiz = filhoMax;
    }
	else {
      pronto = 1;
	}
  }
}
void miniheap(int *vet, int n) {
	int i, tmp,aux;

	for (i = (n / 2); i >= 0; i--) {
		peneira(vet, i, n - 1);
	}

	for (i = n-1; i >= 1; i--) {
		tmp = vet[0];
		vet[0] = vet[i];
		vet[i] = tmp;
		peneira(vet, 0, i-1);
	}
}
void peneira2(int *vet, int raiz, int fundo) {
	int pronto, filhoMax, tmp;

	pronto = 0;
	while ((raiz*2 >= fundo) && (!pronto)) {
		if (raiz*2 == fundo) {
			filhoMax = raiz * 2;
		}
		else if (vet[raiz * 2] < vet[raiz * 2 + 1]) {
			filhoMax = raiz * 2;
		}
		else {
			filhoMax = raiz * 2 + 1;
		}

	if (vet[raiz] > vet[filhoMax]) {
		tmp = vet[raiz];
		vet[raiz] = vet[filhoMax];
		vet[filhoMax] = tmp;
		raiz = filhoMax;
    }
	else {
      pronto = 1;
	}
  }
}


void maxheap(int *vet, int n) {
	int i, tmp;

	for (i = (n / 2); i >= 0; i--) {
		peneira2(vet, i, n - 1);
	}

	for (i = n-1; i >= 1; i--) {
		tmp = vet[0];
		vet[0] = vet[i];
		vet[i] = tmp;
		peneira(vet, 0, i-1);
	}
        }

void Heapify (int *V,int tam, int tipo){
     int *A;
     int n,i;


    if (tipo==1){

  void peneira(int *A, int tam, int tipo);
  void miniheap(int *vet, int tam);

   for (i = 0; i < tam; i++) {
		printf("%d ", A[i]);
	}
}
    if (tipo==2){
  peneira2(A, tam, tipo);
  maxheap(A,tam);

  for (i = 0; i < tam; i++) {
		printf("%d ", A[i]);
            }
        }
    }




int main (void){

      int *A;
      int n,i,tam, tipo;

      printf ("Entre com o tamanho do vetor:\n ");
      scanf ("%d", &n);
      printf ("Entre com os elementos do vetor:\n ");
      alocaVet (A, n);
      for (i=0; i< n; i++){
      scanf ("%d", A);

      }
      printf ("-----1-MinHeap\n-----2-MaxHeap:\n");
      scanf ("%d" , &tipo);
      Heapify (A,n,tipo);

return 0;}
