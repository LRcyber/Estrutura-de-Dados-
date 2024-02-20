#include <stdio.h>
#include<stdlib.h>
#define max 15

void peneira(int *vet, int raiz, int f);
void peneira2(int *vet, int raiz, int f);

void miniheap(int *vet, int n) {
	int i, tmp;

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

void peneira(int *vet, int raiz, int f) {
	int p, filhoMax, tmp;

	p = 0;
	while ((raiz*2 <= f) && (!p)) {
		if (raiz*2 == f) {
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
      p = 1;
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
void peneira2(int *vet, int raiz, int f) {
	int p, filhoMin, tmp;

	p = 0;
	while ((raiz*2 >= f) && (!p)) {
		if (raiz*2 == f) {
			filhoMin = raiz * 2;
		}
		else if (vet[raiz * 2] < vet[raiz * 2 + 1]) {
			filhoMin = raiz * 2;
		}
		else {
			filhoMin = raiz * 2 + 1;
		}

	if (vet[raiz] > vet[filhoMin]) {
		tmp = vet[raiz];
		vet[raiz] = vet[filhoMin];
		vet[filhoMin] = tmp;
		raiz = filhoMin;
    }
	else {
      p = 1;
	}
  }
}
int main(void) {
	int vetor[max] = {10,14,2,24,69,78,12,16,1,6,3,45,0,9,7};
	int i;




	miniheap(vetor,max);
    printf("MINIHEAP\n");
	for (i = 0; i < max; i++) {
		printf("%d ", vetor[i]);
	}
	printf("\n\n");

	maxheap(vetor,max);
	 printf("MAXHEAP\n");
for (i = 0; i < max; i++) {
		printf("%d ", vetor[i]);
	}


	return 0;
}
