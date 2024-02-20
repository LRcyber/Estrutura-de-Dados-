#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int inverte (char*, int, int);
int palindromo (char *);

int main (void){
    char *Ptrs;
    int y, aux;

    Ptrs = malloc (aux*sizeof(char));
    if ((Ptrs==NULL)){
printf("Erro: Memoria insuficiente!!!\n");
system("PAUSE");
return -1;
}
    printf ("digite a palavra:");
    gets(Ptrs);
    aux = strlen(Ptrs);

    inverte(*Ptrs, y, aux);
    palindromo (*Ptrs);


return 0;}




int inverte (char *str, int y, int aux) {

     if (y <= aux) return 1;

     else {
         if (str[y] != str[aux]) return 0;

         return inverte(str, y-1, aux+1);
     }
}

 int palindromo (char *n) {
     int aux1, x = 0;

     aux1 = inverte(n, strlen(n), x);

     if (aux1 == 1) printf("Eh palindromo");

     else printf("Nao eh palindromo");

 }
