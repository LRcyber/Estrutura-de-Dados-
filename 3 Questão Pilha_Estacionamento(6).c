#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>





typedef enum {False,True} boolean;
struct carros{
 char placa[7];
 int manobra;};
typedef struct no_pilha{
 struct carros info;
 struct no_pilha *prox;
 } No;
typedef struct descritor{
 int quantidade;
 No *pilha;
 } def_pilha;
void inicializa(def_pilha *Pilha)
{
 Pilha->quantidade=0;
 Pilha->pilha=NULL;
}
boolean vazia(def_pilha Pilha)
{
 return(Pilha.pilha==NULL);
}
No* cria_no(struct carros dados)
{ No* q;
 q =(No*) malloc(sizeof(struct no_pilha));
 q->info=dados;
 q->prox=NULL;
 return q;
}
void empilha(struct carros dados, def_pilha* Pilha)
{ No* q=cria_no(dados);
 if(!vazia(*Pilha))q->prox = Pilha->pilha;
 Pilha->pilha = q;
 Pilha->quantidade++;
}
boolean desempilha(struct carros *dados, def_pilha* Pilha)
{ No* q;
 if (vazia(*Pilha)) return False;
 q = Pilha->pilha;
 *dados = q->info;
 Pilha->pilha = Pilha->pilha->prox;
 free(q);
 Pilha->quantidade--;
 return True;
}
void imprime(def_pilha pilha)
{ printf("\n\nOs carros no estacionamento: \n");
 while (pilha.pilha!=NULL){
 printf("%s - ",(pilha.pilha->info).placa);
 printf("%d\n", (pilha.pilha->info).manobra);
 pilha.pilha = pilha.pilha->prox;};
 printf("\n");
}
boolean retira(def_pilha* pilha, struct carros* dados)
{ def_pilha q,p;
 boolean achou = False;;
 struct carros carro;
 q = *pilha; inicializa(&p);
 while (!vazia(q) && !achou){
 desempilha(&carro,&q);
 if (strcmp(carro.placa,dados->placa) != 0) empilha(carro,&p);
 else{ achou = True;
 dados->manobra = carro.manobra;}}
 while (desempilha(&carro,&p)){
 (carro.manobra)++;
 empilha(carro,&q); }
 (*pilha) = q;
 return achou;
}
int main (void)
{ def_pilha estacionamento;
 struct carros carro;
 int opcao;
 inicializa(&estacionamento);
 do{
 do{
 printf("\n(1)Entrada\n(2)Saida\n(3)Imprimir\n(4)Encerrar\nOpcao=");
 opcao=getche()-48;
 }while (opcao<0 && opcao>4);
 switch(opcao){
 case 1: printf("\n\nQual a placa do carro = ");
 scanf("%s",&carro.placa);
 carro.manobra = 0;
 empilha(carro,&estacionamento);break;
 case 2: if (vazia(estacionamento))
 printf("\nNao tem mais carros ...\n");
 else{
 printf("\nQual a placa do carro = ");
 scanf("%s",&carro.placa);
 if (retira(&estacionamento,&carro))
 printf("O carro de placa %s foi manobrado %d vezes", carro.placa, carro.manobra);
else printf("O carro de placa %s nao se encontra mais aqui \n",carro.placa);}
 break;
 case 3: if (!vazia(estacionamento)) imprime(estacionamento);
 else printf("Nao tem mais carros ...\n");printf("\n\n");
 break;}
 }while (opcao != 4);
 printf("\n\n\aDigite algo para encerrar....");getch();
 return 1;
}
