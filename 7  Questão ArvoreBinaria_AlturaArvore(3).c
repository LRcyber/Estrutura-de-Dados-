/*Escreva uma função que calcule a altura de uma árvore binária.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct dataType{
 struct Tree*info;
 }dataType;

struct nodetype{
	dataType info;
	struct nodetype *left;
	struct nodetype *right;
	struct nodetype *father;
};
typedef struct nodetype Node;

int maior(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}//maior
int altura(Node *father){
   if((father == NULL) || (father->left == NULL && father->right == NULL))
       return 0;
   else
       return 1 + maior(altura(father->left), altura(father->right));
}
/*void criarArvore(Node **pRaiz)
{
    *pRaiz = NULL;
}
*/
int main(void){

    int c,d;

    struct nodetype*No, *raiz;
    altura(&raiz);
    maior (c,d);

 return 0;
}
