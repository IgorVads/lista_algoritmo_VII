#include <stdio.h>
#include <locale.h>

int linha(){
	printf("\n============================================\n");
}


int main(){
	setlocale(LC_ALL,"portuguese");
	int i,cont = 0;
	
	for(i = 10;i <= 50;i++){
		if(i % 2 == 0){
			cont = cont + 1;
			printf("%d - ",i);
		}
	}
	linha();
	printf("\n%d é o total de números pares.\n ",cont);
	linha();
	
	return(0);
}