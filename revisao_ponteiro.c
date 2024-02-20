#include <stdio.h>
#include <stdlib.h>


void funct(int *py)
{
	++(*py);
	printf("%d\n",*py);//6
}
int main()
{
	int x;
	x = 5;
	printf("%d\n", x);//5
	funct(&x);
	printf("%d\n", x) ;//6
	system("PAUSE");
	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
void funct(int y){
	++y;

	printf("%d\n",y);}

int main(){
	    int x;
        x = 5;
	printf("%d\n", x);
	funct(x);
	printf("%d\n", x) ;
	system("PAUSE");
	return 0;}
*/
