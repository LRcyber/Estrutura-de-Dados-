#include <stdio.h>
#include <stdlib.h>

void insere();
void insere();
void menu();
void exclui();

typedef struct dados
{
  char nome[15];
  struct dados *prox;
}circular;

circular *cria_nodo();

circular *cria_nodo()
{
     circular *p;
     p=(circular*)malloc(sizeof(circular));
     if(!p)
     {
           printf("problemas na alocacao");
           getch();
           exit(0);
     }
}
void menu()
{
     system("cls");
     static circular *pe = NULL;
     int op;
     char nome[15],var;
     printf("digite 1 para inserir Soldados:  ");
     printf("\ndigite 3 para iniciar a remocao: ");
     printf("\ndigite 9 para sair:\n");
     scanf("%d",&op);
     switch(op)
     {
               fflush(stdin);
               case 1:
                    {
                        while(var!='N' && var!='n')
                        {
                           printf("Digite o nome do soldado: ");
                           scanf("%s",nome);
                           insere(&pe, nome);
                           fflush(stdin);
                           puts("\nDeseja inserir novos Soldados? S para SIM ou N para não");
                           scanf("%c",&var);
                        }
                        menu();
                    }
              case 3:
                   {
                        exclui(pe);
                        exit(0);
                   }

              case 9:
                   {
                        exit(0);
                   }
     }
}
void insere(circular **n, char dado[15])
{
     circular *novo, *aux;
     novo=cria_nodo();
     strcpy(novo->nome,dado);
     if(*n==NULL)
     {
        novo->prox=novo;
        *n=novo;
     }
     else
     {
         aux=*n;
         while(aux->prox != *n)
         {
               aux=aux->prox;
         }
         aux->prox=novo;
         novo->prox=*n;
     }
}
void exclui(circular *p)
{
     char no[15];
     circular *paux;
     int i;
     if (p==NULL)
     {
        printf("Lista vazia");
        getch();
        menu();
     }
     printf("digite o nome do Soldado para iniciar contagem: ");
     scanf("%s",&no);
     while ((strcmp(no, p->nome))!= 0)
     {
           p=p->prox;
     }
     while(p->prox!=p)//enquanto o nodo não apontar para ele mesmo//
     {
         printf("\nA contagem inicia no Soldado: %s", p->nome);
         getch();

         for(i=1;i<3;i++)
         {
               if(i==2)
               {
                       paux=p;//identifica nodo anterior ao que será removido//
               }
               p=p->prox;
         }
         printf("\nSoldado removido: %s", p->nome);
         paux->prox = p->prox;
         free(p);
         p=paux->prox;
     }
     printf("\n\n->Soldado restante: %s", p->nome);
     getch();
     free(p);
}
int main(int argc, char *argv[])
{
  menu();
  system("PAUSE");
  return 0;
}
