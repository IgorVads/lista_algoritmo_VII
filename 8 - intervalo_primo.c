#include <stdio.h>

//veja uma forma de continuar o loop ate que digite-se um número maior que 0, por enquanto o programa 
//está encerrando.

int main(){
	
	int i,x,y,troca,div,n;
	
		printf("Insira o primeiro número: ");
		scanf("%d",&x);
		
		printf("Insira o segundo: ");
		scanf("%d",&y);
		
			if(x > 0 && y > 0 ){
				if(x > y){
					troca = x;
					x = y;
					y = troca;

				}
					for(i = x; i <= y;i++){
						div = 0;
						for(n = 1;n <= i;n++){
							if(i % n == 0);
								div++;
							
						}
						if(div == 2){
							printf("%d",i);
						}
					}
					
					
			}else{
				printf("Insira um intervalo válido!");
			}

	
}