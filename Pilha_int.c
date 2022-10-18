#include<stdio.h>
#include<stdlib.h>
#define MAXTAM 10

typedef struct{
int item [MAXTAM];
int top;
}TPilha;
//declaraçao da strutura pilha


//funcao incia pilha
void TPilha_Incia(TPilha*ptr){
    ptr->top=-1;
}
//funcao verifica se a pilha esta vazia
int TPilha_Vazia(TPilha*ptr){
    if (ptr->top ==-1)
        return 1;
        else
            return 0;
}
//funcao verifica se a pilha esta cheia
int TPilha_Cheia(TPilha*ptr){
    if (ptr->top==MAXTAM-1)
        return 1;
        else
            return 0;
    }


//funcao insere na pilha
void TPilha_Insere (TPilha*ptr,int x){
    if(TPilha_Cheia(ptr)==1){
        printf("ERRO! pilha cheia!!");
    }
        else{
            ptr->top++;
            ptr->item[ptr->top]=x;// adiciona intem no topo
        }
}
//funcao retira da pilha
int TPilha_Retira (TPilha*ptr){
int aux;
    if(TPilha_Vazia(ptr)==1){
        printf("Erro!pilha vazia");}
     else{
        aux=ptr->item [ptr->top];
        ptr->top--;
        return aux;}
     }


int main(void){

    TPilha*ptr=(TPilha*)malloc(sizeof(TPilha));//alocaçao dinamica da memoria

    TPilha_Incia(ptr);
    TPilha_Insere(ptr,1);
    TPilha_Insere(ptr,2);
    TPilha_Insere(ptr,3);

    int aux;
    aux=TPilha_Retira(ptr);
    printf("\n SAIU:%d", aux);

return 0;
}