#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

/*Dado um array de tamanho N dessa estrutura, implemente funções de ordenação para o array pelo campo escolhido pelo usuário (matrícula, nome ou nota). Faça cinco versões para o algoritmo:
a) Mergesort; b) Quicksort; c) Heapsort; d) InsertionSort; e) SelectionSort
*/



struct Pessoa{
    int matricula;
    char nome[50];
    float nota;
}Pessoa;

  void Menu(void){
   switch(1){
       printf ("ORDENACAO POR MATRICULA");
   break;}

  switch(2){
      printf ("ORDENACAO POR NOME");
   break;}

   switch(3){
       printf ("ORDENACAO POR NOTA");
   break;}

  }

  void mergeSortMatricula(struct Pessoa* ptr, int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, N = fim-comeco+1;
    struct Pessoa *ptrAux;
    ptrAux = malloc(N * sizeof(Pessoa));

    while(com1 <= meio && com2 <= fim){
        if( (Pessoa.matricula) < Pessoa.matricula) {
            ptrAux = ptr;
            com1++;
        } else {
            ptrAux[comAux] = ptr[com2];
            com2++;
        }
        comAux++;
    }

    while(com1 <= meio){  //Caso ainda haja elementos na primeira metade
        ptrAux[comAux] = ptr[com1];
        comAux++;
        com1++;
    }

    while(com2 <= fim) {
        ptrAux[comAux] = ptr[com2];
        comAux++;
        com2++;
    }

    for(comAux = comeco; comAux <= fim; comAux++){    //Move os elementos de volta para o vetor original
        ptr[comAux] = ptrAux[comAux-comeco];
    }

    free(ptrAux);
}
void mergeSortNome(struct Pessoa* ptr, int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, N = fim-comeco+1;
    struct Pessoa *ptrAux;
    ptrAux = malloc(N * sizeof(Pessoa));

    while(com1 <= meio && com2 <= fim){
        if( (Pessoa.nome) < Pessoa.nome) {
            ptrAux = ptr;
            com1++;
        } else {
            ptrAux[comAux] = ptr[com2];
            com2++;
        }
        comAux++;
    }

    while(com1 <= meio){
        ptrAux[comAux] = ptr[com1];
        comAux++;
        com1++;
    }

    while(com2 <= fim) {
        ptrAux[comAux] = ptr[com2];
        comAux++;
        com2++;
    }

    for(comAux = comeco; comAux <= fim; comAux++){
        ptr[comAux] = ptrAux[comAux-comeco];
    }

    free(ptrAux);
}
void mergeSortNota(struct Pessoa* ptr, int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, N = fim-comeco+1;
    struct Pessoa *ptrAux;
    ptrAux = malloc(N * sizeof(Pessoa));

    while(com1 <= meio && com2 <= fim){
        if( (Pessoa.nota) < Pessoa.nota) {
            ptrAux = ptr;
            com1++;
        } else {
            ptrAux[comAux] = ptr[com2];
            com2++;
        }
        comAux++;
    }

    while(com1 <= meio){
        ptrAux[comAux] = ptr[com1];
        comAux++;
        com1++;
    }

    while(com2 <= fim) {
        ptrAux[comAux] = ptr[com2];
        comAux++;
        com2++;
    }

    for(comAux = comeco; comAux <= fim; comAux++){
        ptr[comAux] = ptrAux[comAux-comeco];
    }

    free(ptrAux);
}

void mergeSort(struct Pessoa*p, int comeco, int fim){
    if (comeco < fim) {
        int meio = (fim+comeco)/2;

        mergeSort(&p, comeco, meio);
        mergeSort(&p, meio+1, fim);
        Sort(&p, comeco, fim);
    }
}

void insertion_sort(int tabela[], int largura){
	int i, memoria, contador;
	bool marcador;
	for(i=1; i<largura; i++){
		memoria = tabela[i];
		contador = i-1;
		do{
			marcador = false;
			if(tabela[contador] > memoria){
				tabela[contador+1] = tabela[contador];
				contador--;
				marcador = true;
			}
			if(contador < 0) marcador = false;
		}while(marcador);
	}
	tabela[contador+1] = memoria;
}


int main (void){


    struct Pessoa *ptr;
    struct Pessoa *ptrAux;
    Menu();
free(ptr);
free(ptrAux);

return 0;}
