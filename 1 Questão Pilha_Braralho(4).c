#include<stdio.h>
#include<stdlib.h>


/*Utilizando estruturas do tipo pilha, crie um algoritmo de embaralhamento de baralho com
52 cartas diferentes. Utilize 3 pilhas de tamanhos diferentes que somados resultem em 52
itens. Faça pushs e pops aleatórios entre as pilhas até que todas estejam cheias, em
seguida recombine em uma quarta pilha.*/




struct Pilha1 {
	int topo;
	int capa;
	char *carta;

};

struct Pilha2 {
	int topo;
	int capa;
	char *carta;

};

struct Pilha3 {
	int topo;
	int capa;
	char *carta;

};

struct Pilha4 {
	int topo;
	int capa;
	char *carta;

};
void criarpilha1( struct Pilha1 *p){

   p->topo = -1;
   p->capa = 18;
   p->carta = (float*) malloc (18 * sizeof(char));

}

void criarpilha2( struct Pilha2 *p){

   p->topo = -1;
   p->capa = 18;
   p->carta = (float*) malloc (18 * sizeof(char));

}
void criarpilha3( struct Pilha3 *p ){

   p->topo = -1;
   p->capa = 16;
   p->carta = (float*) malloc (16 * sizeof(char));

}
void criarpilha4( struct Pilha4 *p ){

   p->topo = -1;
   p->capa = 52;
   p->carta = (float*) malloc (52 * sizeof(char));

}
int estavazia ( struct Pilha4 *p ){

   if( p-> topo == -1 )

      return 1;   // true

   else

      return 0;   // false


}

int estacheia ( struct Pilha4 *p ){

	if (p->topo == p->capa - 1)

		return 1;

	else

		return 0;

}

void empilhar ( struct Pilha1 *p, char v){

	p->topo++;
	p->carta [p->topo] = v;

}

float desempilhar ( struct Pilha1 *p ){

   char aux = p->carta [p->topo];
   p->topo--;
   return aux;

}

float retornatopo ( struct Pilha1 *p ){

   return p->carta [p->topo];

}

int main(){

	struct Pilha1 pilha1;
	struct Pilha2 pilha2;
	struct Pilha3 pilha3;
	struct Pilha4 pilha4;
	int capacidade1=18, capacidade2=18, capacidade3=16, op;
	float valor;


	criarpilha1 (&pilha1);
	criarpilha2 (&pilha2);
	criarpilha3 (&pilha3);
    criarpilha4 (&pilha4);

	while( 1 ){ /* loop infinito */

		printf("\n1- empilhar pilha 1 (push)\n");
		printf("2- desempilhar pilha 1 (POP)\n");
		printf("3- Mostrar o topo pilha 1 ");
		printf("\n4- empilhar pilha 2 (push)\n");
		printf("5- desempilhar pilha 2(POP)\n");
		printf("6- Mostrar o topo pilha 2 ");
		printf("\n7- empilhar pilha 3(push)\n");
		printf("8- desempilhar pilha 3(POP)\n");
		printf("9- Mostrar o topo pilha 3 ");
		printf("\n10- empilhar pilha 4 (push)\n");
		printf("11- desempilhar pilha 4(POP)\n");
		printf("12- Mostrar o topo pilha 4 \n");
		printf("13- sair\n");
		printf("\nopcao? ");
		scanf("%d", &op);

		switch (op){

			case 1: //push

				if( estacheia( &pilha1 ) == 1 )

					printf("\nPILHA CHEIA! \n");

				else {

					printf("\nVALOR? ");
					scanf("%f", &valor);
					empilhar (&pilha1, valor);

				}
				break;

			case 2: //pop
				if ( estavazia(&pilha1) == 1 )

					printf( "\nPILHA VAZIA! \n" );

				else{

					valor = desempilhar (&pilha1);
					printf ( "\n%.1f DESEMPILHADO!\n", valor );

				}
				break;

			case 3: // mostrar o topo
				if ( estavazia (&pilha1) == 1 )

					printf( "\nPILHA VAZIA!\n" );

				else {

					valor = retornatopo (&pilha1);
					printf ( "\nTOPO: %.1f\n", valor );

				}
				break;
				case 4: //push

				if( estacheia( &pilha2 ) == 1 )

					printf("\nPILHA CHEIA! \n");

				else {

					printf("\nVALOR? ");
					scanf("%f", &valor);
					empilhar (&pilha1, valor);

				}
				break;

			case 5: //pop
				if ( estavazia(&pilha2) == 1 )

					printf( "\nPILHA VAZIA! \n" );

				else{

					valor = desempilhar (&pilha1);
					printf ( "\n%.1f DESEMPILHADO!\n", valor );

				}
				break;

			case 6: // mostrar o topo
				if ( estavazia (&pilha2) == 1 )

					printf( "\nPILHA VAZIA!\n" );

				else {

					valor = retornatopo (&pilha1);
					printf ( "\nTOPO: %.1f\n", valor );

				}
				break;
            case 7: //push

				if( estacheia( &pilha3 ) == 1 )

					printf("\nPILHA CHEIA! \n");

				else {

					printf("\nVALOR? ");
					scanf("%f", &valor);
					empilhar (&pilha1, valor);

				}
				break;

			case 8: //pop
				if ( estavazia(&pilha3) == 1 )

					printf( "\nPILHA VAZIA! \n" );

				else{

					valor = desempilhar (&pilha1);
					printf ( "\n%.1f DESEMPILHADO!\n", valor );

				}
				break;

			case 9: // mostrar o topo
				if ( estavazia (&pilha3) == 1 )

					printf( "\nPILHA VAZIA!\n" );

				else {

					valor = retornatopo (&pilha1);
					printf ( "\nTOPO: %.1f\n", valor );

				}
				break;
            case 10: //push

				if( estacheia( &pilha4 ) == 1 )

					printf("\nPILHA CHEIA! \n");

				else {

					printf("\nVALOR? ");
					scanf("%f", &valor);
					empilhar (&pilha1, valor);

				}
				break;

			case 11: //pop
				if ( estavazia(&pilha4) == 1 )

					printf( "\nPILHA VAZIA! \n" );

				else{

					valor = desempilhar (&pilha1);
					printf ( "\n%.1f DESEMPILHADO!\n", valor );

				}
				break;

			case 12: // mostrar o topo
				if ( estavazia (&pilha4) == 1 )

					printf( "\nPILHA VAZIA!\n" );

				else {

					valor = retornatopo (&pilha1);
					printf ( "\nTOPO: %.1f\n", valor );

				}
				break;


			case 13:
				exit(0);

			default: printf( "\nOPCAO INVALIDA! \n" );
		}
	}

}

