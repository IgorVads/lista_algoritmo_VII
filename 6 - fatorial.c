#include <stdio.h>
#include <locale.h>

//refaça usando função.

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i,num;
	int fat = 1;
	
	printf("Insira o número: ");
	scanf("%d",&num);
		if(num < 0){
			printf("Não há fatorial para este número.");
		}else{
			for(i = 1; i <= num; i++){
			fat = fat * i;
			}
			printf("O resultado de !%d é: %d\n",num,fat);
		}
	
	
	
	
	
	
	
	return(0);
}