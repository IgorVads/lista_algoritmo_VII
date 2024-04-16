#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <stdlib.h>

void linha(){
	printf("===================\n");
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Dependendo da IDE usa-se "," no lugar de "." para separar números decimais. 
	
	int i;
	float ma,n1,n2,n3;
		for(i = 1;i <= 10;i++){
			printf("Aluno:%d\n",i);
			printf("Primeira nota: ");
			scanf("%f",&n1);
			
			printf("Segunda nota: ");
			scanf("%f",&n2);
			
			printf("Terceira nota: ");
			scanf("%f",&n3);
			
			ma = (n1 + n2 + n3)/3;
			
				if(ma >= 9){
					linha();
					printf("Média: %.1f\n",ma);
					printf("Conceito: A\n\n");
					linha();
					
				}else{
					if(ma >= 7 && ma < 9){
						linha();
						printf("Média: %.1f\n",ma);
						printf("Conceito: B\n\n");
						linha();
						
					}else{
						if(ma >= 6 && ma < 7){
							linha();
							printf("Média: %.1f\n",ma);
							printf("Conceito: C\n\n");
							linha();
							
						}else{
							if(ma >= 4 && ma < 6){
								linha();
								printf("Média: %.1f\n",ma);
								printf("Conceito: D\n\n");
								linha();
								
							}else{
								linha();
								printf("Média: %.1f\n",ma);
								printf("Conceito: E\n\n");
								linha();
								
							}
						}
					}
				}
			
		}
	
	
	
	
	return(0);
}