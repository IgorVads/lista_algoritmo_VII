#include <stdio.h>
#include <locale.h>

//Um algoritmo que solicita e lê a idade do usuário e exibe uma mensagem informando que ele é maior de idade, caso a idade seja maior ou igual a 18 anos.


int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i,idade;
	
	for(i = 1;i <= 10;i ++)
	{
	  printf("Digite a sua idade: ");
	        scanf("%d",&idade);
	  if(idade < 18)
	  {
	    printf("Você é menor de idade.\n\n");
	  }
	  else{
	        printf("Você é maior de idade.\n\n");
	      }
	}
	
	return(0);
}
