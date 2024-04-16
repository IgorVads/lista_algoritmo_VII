#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i,idade;
	
	for(i = 1;i <= 10;i ++){
		printf("Insira sua idade: ");
		scanf("%d",&idade);
		//system("cls");
			if(idade < 18){
				printf("você é menor de idade.\n\n");
			}else{
				printf("você é maior de idade.\n\n");
			}
		
		
	}
	
	
	
	
	
	
	return(0);
}