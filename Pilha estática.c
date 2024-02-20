// pilha estatica

#include<stdio.h>
#include<stdlib.h>
#define MAXTAM 10


int Pilha[MAXTAM];
int top;

void Pilha_Construtor(){
top = -1;}

int Pilha_vazia(){
if (top == -1){
    return 1;
    }
    return 0;}


 void Pilha_cheia (){
 if (top==MAXTAM-1)
   return 1;
   else
    return 0;
    }
//empilha
void Pilha_push(int valor){
    if (Pilha_cheia){
            // printf ("PILHA CHEIA\n!!");
        }else{
            top++;
            Pilha[top+1]=valor;
            top++;}
};

//desempilha
int Pilha_pop(int valor){
    if (Pilha_vazia()){
printf("Pilha vazia!");
            valor= Pilha[top];
            top--;

    };
}
int main (void){

int valor;
Pilha_Construtor();

Pilha_push(5);
Pilha_push(6);
Pilha_push(7);
Pilha_push(8);
Pilha_push(9);
Pilha_push(10);


//printf(" a pilha eh:Pilha[%d]= %d\n", top, valor);
int aux;
aux=Pilha_pop();





return 0;}

