#include<stdio.h>

void move_disco (int d, char ori, char dest, char aux){
if (d==1){
    printf("Mover disco:%d de: %c para:%c\n",d ,ori,dest);
}else{
move_disco (d-1, ori, aux, dest);}
}
int main(void){
    int discos = 3;
    move_disco(discos,'A','B','C');

return 0;}
