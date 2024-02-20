#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

int testePalindromo(char* str, int, int);

int main (void){

    char str[MAX];
    int tam;
    printf ("digite a palavra:");
    gets(str);
    tam = strlen(str);


    testePalindromo(str[MAX], tam);

return 0;}
int testePalindromo (char str[MAX], int n){
int i,j;
n = strlen(str);

for(i=0,j=strlen(str)-1;i<strlen(str)/2;i++,j--){
    if(str[i]!=str[j])
return 0;
}
return 1;

}
