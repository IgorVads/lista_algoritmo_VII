#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i = 10, cont = 0;
	
	//for(i = 10;i <= 50;i++){
		//if(i % 2 == 0){
			//cont = cont + 1;
			//printf("%d - ",i);
		//}
	//}
	
	while(i <= 50){
		if(i % 2 == 0){
			cont++;
			printf("%d  ", i);
		}
		i++;
	}
	printf();
	printf("\n%d é o total de números pares.\n ",cont);
	
	return(0);
}
